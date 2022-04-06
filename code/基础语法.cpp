#include <iostream>
using namespace std;
#include <string>
void testIf();

void testWhile();

void testString()
{
    string a;
    cout << "请输入一个字符串:" << endl;
    cin >> a;
    cout << "你输入的是" << a << endl;
}

void testDoWhile(){
    char aar[] ="alsd";

    int i = 0;
    do
    {
        cout<<i;
        i++;
    } while (i<10);
    
}

void testRand()
{
    int num = arc4random() % 100 + 1;
    int input = 0;
    cout << "系统生成了一个1-100的随机数，请您猜！" << endl;
    while (true)
    {
        cin >> input;
        if (input > num)
        {
            cout << "大了" << endl;
        }
        else if (input < num)
        {
            cout << "小了" << endl;
        }
        else
        {
            cout << "猜对了" << endl;
            break;
        }
    }
}
int main()
{
    // testString();
    // system("pause");
    // testIf();
    // testWhile();
    testRand();
    return 0;
}

void testIf()
{
    int score;
    cout << "请输入你考的分数：" << endl;
    cin >> score;
    if (score > 600)
    {
        cout << "你考入一本了！" << endl;
    }
    else if (score > 500)
    {
        cout << "你考入了二本了！" << endl;
    }
    else if (score > 400)
    {
        cout << "你考入了三本！" << endl;
    }
    else if (score > 250)
    {
        cout << "你考上了专科" << endl;
    }
    else
    {
        cout << "你真废了!" << endl;
    }
    return;
}

void testWhile()
{
    int i = 0;
    while (i < 10)
    {
        cout << i << endl;
        i++;
    }
}