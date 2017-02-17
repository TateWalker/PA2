#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <vector>
using namespace std;




int incFile(string fname, int size)
{
	ofstream myfile;
	myfile.open (fname);
        int incNum = 1;
        vector<int> increasingNums;
        myfile<<size<<endl;
        for(int i = 0; i < size; i++)
        {
                increasingNums.push_back(incNum++);
        }
        for(int i = 0; i<increasingNums.size();i++)
        {
                myfile << increasingNums[i]<<endl;
        }
  	myfile.close();
  	return 0;
}

int decFile(string fname, int size)
{
	ofstream myfile;
        myfile.open (fname);
        int decNum = 1;
        vector<int> decreasingNums;
        myfile<<size<<endl;
        for(int i = size; i >0; i--)
        {
                decreasingNums.push_back(decNum++);
        }
        for(int i = decreasingNums.size()-1; i>=0; i--)
        {
                myfile << decreasingNums[i]<<endl;
        }
        myfile.close();
        return 0;
}

int randFile(string fname, int size)
{
	ofstream myfile;
	myfile.open (fname);
	srand(time(0));
	vector<int> rnums;
	myfile<<size<<endl;
	for(int i = 0; i<size; i++)
	{
		int rando = rand()%(size)-size/2;
		rnums.push_back(rando);
	}
	for(int i = 0; i<rnums.size(); i++)
	{
		myfile << rnums[i]<<endl;
  	}
  	myfile.close();
  	return 0;
}
int main()
{
	
	randFile("tenTwoRand.txt",100);
	randFile("tenThreeRand.txt",1000);
	randFile("tenFourRand.txt",10000);
	randFile("tenFiveRand.txt",100000);
	incFile("tenTwoInc.txt",100);
	incFile("tenThreeInc.txt",1000);
	incFile("tenFourInc.txt",10000);
	incFile("tenFiveInc.txt",100000);
	decFile("tenTwoDec.txt",100);
	decFile("tenThreeDec.txt",1000);
	decFile("tenFourDec.txt",10000);
	decFile("tenFiveDec.txt",100000);

return 0;
}