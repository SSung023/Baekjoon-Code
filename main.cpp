#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int num = 0;
    int count = 0;
    int temp = 0;

    cin >> num;

    temp = num;

    while(true){

        //���� ���� 10���� �۴ٸ� �� ���� 10�� ���ϰ�, ���� ���� ���Ѵ�
        if(temp < 10){
            temp = temp + temp * 10;
        }

        //���� ���� 10���� ũ�ٸ� �� �ڸ� ���� ���� ���� 1�� �ڸ�
        //���� ���� ���� �ڸ��� ���� �ڸ��� �ȴ�.
        else{
            temp = ((temp % 10) * 10) + ((temp / 10 + temp % 10) % 10);

        }

        count++;

        if(temp == num)
            break;

    }

    cout << count;


    return 0;
}
