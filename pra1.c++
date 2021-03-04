#include <iostream>
#include <string>
using namespace std;
 
class account{
    
    public:
        void ini_card()
        {
            pwd = "000000";
            cash = 0;
        }
        void setPwd(string& new_pwd)
        {
            pwd = new_pwd;
        }
        void withdraw(int input_cash)
        {
            cash -= input_cash;
        }
        void save(int input_cash)
        {
            cash += input_cash;
        }
        int check_cash()
        {
            return cash;
        }
        string get_pwd()
        {
            return pwd;
        }

    private:
        string pwd;
        int cash;
};

int main()
{
    account a;
    a.ini_card();
    while(1)
    {
        cout << "1 : 重設密碼, 2:查餘額, 3:存錢, 4:領錢, 0:離開"<<endl;
        cout << "請問需要做什麼指令? : ";
        int instr;
        cin >> instr;
        cout << endl;
        if(instr == 0)
        {
           cout << "謝謝惠顧" << endl;
            break;
        }
        string new_pwd = "";
        int new_cash;

        switch(instr)
        {
            case 1:
                cout << "請輸入新密碼";
                cin >> new_pwd;
                a.setPwd(new_pwd);
                cout << "新密碼為： " << a.get_pwd()<< endl;
                break;
            case 2:
                cout << "餘額： " << a.check_cash()<< endl;
                break;
            case 3:
                cout << "請輸入欲存金額: ";
                cin >> new_cash;
                a.save(new_cash);
                cout << "餘額： " << a.check_cash()<< endl;
                break;
            case 4:
                cout << "請輸入欲領金額: ";
                cin >> new_cash;
                a.withdraw(new_cash);
                cout << "餘額： " << a.check_cash()<< endl;
                break;
        }
    }
    return 0;
}