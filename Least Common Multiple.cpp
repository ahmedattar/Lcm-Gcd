#include <iostream>
using namespace std;
// recursive function to determine Greatest Common divisor of 2 numbers
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
/* function for determining Least Common Multiple of 2 elements by using the magic rule that say
 First Number * Second Number = LeastCommonMultiple(First Number ,Second Number ) * GreatestCommondivisor(First Number, Second Number)
*/
long long LeastCommonMultiple(long long FirstNum, long long SecondNum)
{
    long long temp=0;


    if ( FirstNum == SecondNum)
    {
        return FirstNum;
    }

    else if (FirstNum>SecondNum)
    {
        temp = GreatestCommondivisor(FirstNum,SecondNum);
        return ((FirstNum*SecondNum)/temp);
    }

    else
    {
        temp = GreatestCommondivisor(SecondNum,FirstNum);
        return ((FirstNum*SecondNum)/temp);
    }


}

int main()
{
    long long FirstNum,SecondNum;
    cout<<"enter the two numbers " <<endl;
    cin>>FirstNum>>SecondNum;
    cout<< " Least Common Multiple of the 2 numbers is " <<LeastCommonMultiple(FirstNum,SecondNum)<<endl;
    return 0;
}

