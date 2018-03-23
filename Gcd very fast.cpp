#include <iostream>
using namespace std;
// recursive function to determine Greatest Common divisor of 2 numbers
// it is very fast to work
long long GreatestCommondivisor(long long FirstNum, long long SecondNum)
{
    if (SecondNum==0)
    {
        return FirstNum;
    }

    else
    {
        if (FirstNum>SecondNum)
        {
            return GreatestCommondivisor(SecondNum,FirstNum%SecondNum);
        }
        else if (SecondNum>FirstNum)
        {
            return GreatestCommondivisor(FirstNum,SecondNum%FirstNum);
        }
        else
        {
            return FirstNum;
        }
    }
}



int main()
{ long long FirstNum=0, SecondNum=0;
cout<< " enter the 2 numbers "<<endl;
cin>>FirstNum>>SecondNum;
   cout<<"the Greatest Common divisor of the 2 numbers is "<< GreatestCommondivisor(FirstNum,SecondNum)<<endl;
    return 0;
}

