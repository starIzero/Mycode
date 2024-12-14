#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

using namespace std;

void test01()
{
    int Key;
    int choice_money;
    int num = 1;
    int mypassword = 666666;  // 账户的密码
    int password;
    int account = 10000;      // 账户的钱

    while (true)
    {
        do
        {
            system("cls");
            cout<<"*************************"<<endl;
            cout<<"*    请选择以下选项:    *"<<endl;
            cout<<"*    1. 修改密码        *"<<endl;
            cout<<"*    2. 登录取钱        *"<<endl;
            cout<<"*    3. 退出系统        *"<<endl;
            cout<<"*************************"<<endl;
            cin>>Key;
            }while(Key != 1 && Key != 2 && Key != 3);

            switch (Key)
            {
                case 1:
                    system("cls");
                    do
                    {
                        num++;
                        cout<<"请输入原始密码:";
                        cin>>password;
                        //若密码错误,则执行
                        if (mypassword != password)
                        {
                            if (num>3)
                            {
                                cout<<"错误!请按任意键退出..."<<endl;
                                exit(0);
                            }
                            else
                            {
                                cout<<"错误,请再次输入"<<endl;
                            }
                        }
                    }while(mypassword != password && num<=3);
                    cout<<"请输入新密码: "<<endl;
                    cin>>mypassword;
                    cout<<"OK! 请按任意键结束..."<<endl;
                    getchar();
                    getchar();
                    break;

                case 2:
                    do
                    {
                        system("cls");
                    label:
                        if (mypassword != password)
                        {
                            cout<<"请登录,按任意键继续..."<<endl;
                            cout<<"请输入密码: "<<endl;
                            cin>>password;
                            num++;
                            if (num>3)
                            {
                                cout<<"错误!请按任意键退出..."<<endl;
                                exit(0);
                            }
                            else
                            {
                                cout<<"错误,请再次输入"<<endl;
                            }
                            goto label;
                        }
                        else
                        {
                            cout<<"*************************"<<endl;
                            cout<<"*    请选择以下选项:    *"<<endl;
                            cout<<"*    1. $1000          *"<<endl;
                            cout<<"*    2. $2000          *"<<endl;
                            cout<<"*    3. $3000          *"<<endl;
                            cout<<"*    4. 退出           *"<<endl;
                            cout<<"*************************"<<endl;
                            cin>>choice_money;
                        }

                        }while(choice_money != 1 && choice_money != 2 && choice_money != 3 && choice_money != 4);

                        switch (choice_money)
                        {
                            case 1:
                                system("cls");
                                account -= 1000;
                                cout<<"*********************************************"<<endl;
                                cout<<"*    您提出的金额是1000美元,谢谢!         *"<<endl;
                                cout<<"*            余额是"<<account<<"美元        *"<<endl;
                                cout<<"*            按任意键返回...              *"<<endl;
                                cout<<"*********************************************"<<endl;
                                password = 100000;
                                getchar();
                                getchar();
                                break;

                            case 2:
                                system("cls");
                                account -= 2000;
                                cout<<"*********************************************"<<endl;
                                cout<<"*    您提出的金额是2000美元,谢谢!         *"<<endl;
                                cout<<"*            余额是"<<account<<"美元        *"<<endl;
                                cout<<"*            按任意键返回...              *"<<endl;
                                cout<<"*********************************************"<<endl;
                                password = 100000;
                                getchar();
                                getchar();
                                break;

                            case 3:
                                system("cls");
                                account -= 3000;
                                cout<<"*********************************************"<<endl;
                                cout<<"*    您提出的金额是3000美元,谢谢!         *"<<endl;
                                cout<<"*            余额是"<<account<<"美元        *"<<endl;
                                cout<<"*            按任意键返回...              *"<<endl;
                                cout<<"*********************************************"<<endl;
                                password = 100000;
                                getchar();
                                getchar();
                                break;

                            case 4:
                                password = 100000;
                                break;
                        }
                        break;

                case 3:
                    cout<<"*********************************************"<<endl;
                    cout<<"*           感谢您的使用!                  *"<<endl;
                    cout<<"*              再见!                      *"<<endl;
                    cout<<"*********************************************"<<endl;
                    exit(0);
            }
    }
}

int main()
{
    test01();
    return 0;
}
