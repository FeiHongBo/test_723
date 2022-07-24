//#include<iostream>
//#include<fstream>
//#include<complex>
//using namespace std;
//
//int filterNum = 40;
//int sampleRate = 16000;
//
//#define Win_Time 0.025//��25ms������е���Ϊһ������� 
//#define Hop_Time 0.01//ÿ��10ms��һ��֡ 
//#define Pi 3.1415927
//
////1.Ԥ����
//double* pre_emphasizing(double* sample, int len, double factor)
//{
//	double* Sample = new double[len];
//	Sample[0] = sample[0];
//	for (int i = 1; i < len; i++)
//	{
//		//Ԥ���ع���
//		Sample[i] = sample[i] - factor * sample[i - 1];
//	}
//	return Sample;
//}
//
//void Hamming(double* hamWin, int hamWinSize)
//{
//	for (int i = 0; i < hamWinSize; i++)
//	{
//		hamWin[i] = (double)(0.54 - 0.46 * cos(2 * Pi * (double)i / ((double)hamWinSize - 1)));
//	}
//}
//
////����ÿһ֡�Ĺ����� 
//void mfccFFT(double* frameSample, double* FFTSample, int frameSize, int pos)
//{
//	//�Է�֡�Ӵ���ĸ�֡�źŽ���FFT�任�õ���֡��Ƶ��
//	//���������źŵ�Ƶ��ȡģƽ���õ������źŵĹ�����
//	double* dataR = new double[frameSize];
//	double* dataI = new double[frameSize];
//	//int dataI[frameSize];
//	for (int i = 0; i < frameSize; i++)
//	{
//		dataR[i] = frameSample[i + pos];
//		dataI[i] = 0.0f;           //������0
//	}
//
//	int x0, x1, x2, x3, x4, x5, x6, xx, x7, x8;
//	int i, j, k, b, p, L;
//	float TR, TI, temp;
//	/********** following code invert sequence ************/
//	for (i = 0; i < frameSize; i++)
//	{
//		x0 = x1 = x2 = x3 = x4 = x5 = x6 = x7 = x8 = 0;
//		x0 = i & 0x01; x1 = (i / 2) & 0x01; x2 = (i / 4) & 0x01; x3 = (i / 8) & 0x01; x4 = (i / 16) & 0x01;
//		x5 = (i / 32) & 0x01; x6 = (i / 64) & 0x01; x7 = (i / 128) & 0x01; x8 = (i / 256) & 0x01;
//		xx = x0 * 256 + x1 * 128 + x2 * 64 + x3 * 32 + x4 * 16 + x5 * 8 + x6 * 4 + x7 * 2 + x8;
//		dataI[xx] = dataR[i];
//	}
//	for (i = 0; i < frameSize; i++)
//	{
//		dataR[i] = dataI[i]; dataI[i] = 0;
//	}
//
//	/************** following code FFT *******************/
//	for (L = 1; L <= 9; L++)
//	{ /* for(1) */
//		b = 1; i = L - 1;
//		while (i > 0)
//		{
//			b = b * 2; i--;
//		} /* b= 2^(L-1) */
//		for (j = 0; j <= b - 1; j++) /* for (2) */
//		{
//			p = 1; i = 9 - L;
//			while (i > 0) /* p=pow(2,7-L)*j; */
//			{
//				p = p * 2; i--;
//			}
//			p = p * j;
//			for (k = j; k < 512; k = k + 2 * b) /* for (3) */
//			{
//				TR = dataR[k]; TI = dataI[k]; temp = dataR[k + b];
//				dataR[k] = dataR[k] + dataR[k + b] * cos(2 * Pi * p / frameSize) + dataI[k + b] * sin(2 * Pi * p / frameSize);
//				dataI[k] = dataI[k] - dataR[k + b] * sin(2 * Pi * p / frameSize) + dataI[k + b] * cos(2 * Pi * p / frameSize);
//				dataR[k + b] = TR - dataR[k + b] * cos(2 * Pi * p / frameSize) - dataI[k + b] * sin(2 * Pi * p / frameSize);
//				dataI[k + b] = TI + temp * sin(2 * Pi * p / frameSize) - dataI[k + b] * cos(2 * Pi * p / frameSize);
//			} /* END for (3) */
//		} /* END for (2) */
//	} /* END for (1) */
//	for (i = 0; i < frameSize / 2; i++)
//	{
//		FFTSample[i + pos] = (dataR[i] * dataR[i] + dataI[i] * dataI[i]);
//	}
//}
//
////����˵����frameSampleΪ����֮������飬SampleΪ����������Ԥ����֮�������
////          lenΪSample�ĳ��ȣ�frameSizeΪÿ֡�������������frameSampleLenΪ����֮��ĳ��� 
//double* mfccFrame(double* frameSample, double* Sample, int* len, int frameSize, int& frameSampleLen)
//{
//	double* hamWin;
//	int hamWinSize = sampleRate * Win_Time;
//	hamWin = new double[hamWinSize];
//	Hamming(hamWin, hamWinSize);//����hamming��
//
//	int hopStep = Hop_Time * sampleRate;
//	int frameNum = ceil(double(*len) / hopStep);//����һ�����ж���֡
//	frameSampleLen = frameNum * frameSize;//��������֮��ĳ��� 
//	frameSample = new double[frameSampleLen];
//	for (int i = 0; i < frameSampleLen; i++)
//		frameSample[i] = 0;
//
//	double* FFTSample = new double[frameSampleLen];
//	for (int i = 0; i < frameSampleLen; i++)
//		FFTSample[i] = 0;
//
//	for (int i = 0; i * hopStep < *len; i++)//��֡ 
//	{
//		for (int j = 0; j < frameSize; j++)
//		{
//			if (j < hamWinSize && i * hopStep + j < *len)
//				frameSample[i * frameSize + j] = Sample[i * hopStep + j] * hamWin[j];
//			else
//				frameSample[i * frameSize + j] = 0;//��0 
//		}
//		mfccFFT(frameSample, FFTSample, frameSize, i * frameSize);
//	}
//
//	ofstream fileFrame("C:\\Users\\john\\Desktop\\txt\\Frame.txt");
//	for (int i = 0; i < frameSize; i++)
//		fileFrame << frameSample[100 * frameSize + i] << endl;
//
//	delete[]hamWin;
//	return FFTSample;
//}
//
//void DCT(double mel[400][40], double c[400][40], int frameNum)
//{
//	for (int k = 0; k < frameNum; k++)
//	{
//		for (int i = 0; i < 13; i++)
//		{
//			for (int j = 0; j < filterNum; j++)
//			{
//				c[k][i] += mel[k][j] * cos(Pi * i / (2 * filterNum) * (2 * j + 1));
//				//if(k == 0 && i ==0)
//					//cout << c[0][0] << endl;
//			}
//		}
//	}
//	//cout << "c[0][0] = " << c[0][0] << endl;
//}
//
//void computeMel(double mel[400][40], int sampleRate, double* FFTSample, int frameNum, int frameSize)
//{
//	double freMax = sampleRate / 2;//ʵ�����Ƶ�� 
//	double freMin = 0;//ʵ����СƵ�� 
//	double melFremax = 1125 * log(1 + freMax / 700);//��ʵ��Ƶ��ת����÷��Ƶ�� 
//	double melFremin = 1125 * log(1 + freMin / 700);
//	double melFilters[40][3];
//	//double* melFilters = new double[frameSize][3];
//	double k = (melFremax - melFremin) / (filterNum + 1);
//
//	double* m = new double[filterNum + 2];
//	double* h = new double[filterNum + 2];
//	double* f = new double[filterNum + 2];
//
//	for (int i = 0; i < filterNum + 2; i++)
//	{
//		m[i] = melFremin + k * i;
//		h[i] = 700 * (exp(m[i] / 1125) - 1);//��÷��Ƶ��ת����ʵ��Ƶ�� 
//		f[i] = floor((frameSize + 1) * h[i] / sampleRate);
//	}
//
//	delete[] m;
//	delete[] h;
//	//delete[] f;
//
//	for (int k = 0; k < frameNum; k++)
//	{
//		for (int j = 0; j < filterNum; j++)
//			mel[k][j] = 0;
//	}
//
//	//�����ÿ�������˲��������: ��ÿһ֡���д��� 	
//	for (int i = 0; i < frameNum; i++)
//	{
//		for (int j = 1; j <= filterNum; j++)
//		{
//			double temp = 0;
//			for (int z = 0; z < frameSize; z++)
//			{
//				if (z < f[j - 1])
//					temp = 0;
//				else if (z >= f[j - 1] && z <= f[j])
//					temp = (z - f[j - 1]) / (f[j] - f[j - 1]);
//				else if (z >= f[j] && z <= f[j + 1])
//					temp = (f[j + 1] - z) / (f[j + 1] - f[j]);
//				else if (z > f[j + 1])
//					temp = 0;
//				mel[i][j - 1] += FFTSample[i * frameSize + z] * temp;
//			}
//		}
//	}
//
//	ofstream fileMel("C:\\Users\\john\\Desktop\\txt\\Mel.txt");
//	for (int i = 1; i <= filterNum; i++)
//		fileMel << mel[100][i] << endl;
//
//	//ȡ���� 
//	for (int i = 0; i < frameNum; i++)
//	{
//		for (int j = 0; j < filterNum; j++)
//		{
//			if (mel[i][j] <= 0.00000000001 || mel[i][j] >= 0.00000000001)
//				mel[i][j] = log(mel[i][j]);
//		}
//	}
//}
//
//void writeToFile(int frameNum, int frameSize, int hopStep, double DCT[400][40], double* sample, double* Sample, double* frameSample, double* FFTSample, double mel[400][40])
//{
//	ofstream fileDCT("C:\\Users\\john\\Desktop\\txt\\DCT.txt");
//	ofstream filesample("C:\\Users\\john\\Desktop\\txt\\sample.txt");
//	ofstream filePreemphasized("C:\\Users\\john\\Desktop\\txt\\Preemphasized.txt");
//	ofstream fileFft("C:\\Users\\john\\Desktop\\txt\\Fft.txt");
//	ofstream fileLogMel("C:\\Users\\john\\Desktop\\txt\\LogMel.txt");
//	for (int i = 0; i < frameSize; i++)
//	{
//		filesample << sample[100 * hopStep + i] << endl;
//		filePreemphasized << Sample[100 * hopStep + i] << endl;
//		fileFft << FFTSample[100 * frameSize + i] << endl;
//	}
//
//	for (int i = 0; i < filterNum; i++)
//		fileLogMel << mel[100][i] << endl;
//
//	//��һ��
///*	for(int i = 0; i < 13; i++)
//	{
//		double sum = 0.0f;
//		double Mrecording = 0.0f;
//		for(int j = 0; j < frameNum; j++)
//		{
//			sum = sum + DCT[j][i];
//		}
//		Mrecording = sum / frameNum;
//		cout << Mrecording << endl;
//		for(int j = 0; j < frameNum; j++)
//		{
//			DCT[j][i] = abs(DCT[j][i] - Mrecording);
//		}
//	} */
//
//	for (int i = 0; i < 13; i++)//write DCT
//	{
//		for (int j = 0; j < frameNum; j++)
//			fileDCT << DCT[j][i] << " ";
//		fileDCT << endl;
//	}
//}
//
////MFCC
//void MFCC(double* sample, int len)
//{
//	double factor = 0.95;//Ԥ���ز���
//	double* Sample;
//	//1.Ԥ���� 
//	Sample = pre_emphasizing(sample, len, factor);
//
//	//�����ÿ֡�ж��ٸ��㣬Ȼ�������ӽ���ĸ�����2^k��ʹ��ÿ֡�ĵ�ĸ���Ϊ2^k���Ա���в�0 
//	int frameSize = (int)pow(2, ceil(log(Win_Time * sampleRate) / log(2.0)));
//	double* frameSample = NULL, * FFTSample = NULL;
//	int frameSampleLen;
//
//	//��֡���Ӵ��������� 
//	FFTSample = mfccFrame(frameSample, Sample, &len, frameSize, frameSampleLen);
//
//	int hopStep = Hop_Time * sampleRate;//��hopStep���������һ��֡ 
//	int frameNum = ceil(double(len) / hopStep);//��������������һ���ж���֡ 
//
//	double mel[400][40];
//	computeMel(mel, sampleRate, FFTSample, frameNum, frameSize);
//
//	double c[400][40];
//	for (int i = 0; i < 400; i++)
//	{
//		for (int j = 0; j < 40; j++)
//			c[i][j] = 0;
//	}
//	DCT(mel, c, frameNum);
//
//	writeToFile(frameNum, frameSize, hopStep, c, sample, Sample, frameSample, FFTSample, mel);
//}
//
//int main()
//{
//	ifstream filedata("D:\\deep learning data\\ESC50\\audio\\1-137-A-32.wav");
//	int len = 0;
//	//��ȡwav�ļ�����ֵ 
//	double* sample = new double[160000];
//	while (!filedata.eof())
//	{
//		filedata >> sample[len];
//		sample[len] = sample[len] * 1000;
//		len++;
//	}
//	cout << len << endl;
//	MFCC(sample, len);
//	delete[] sample;
//
//	return 0;
//}