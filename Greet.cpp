/*
* ������� ����(�̸��� �ð���)�� �޾Ƽ�, ������ �´� �λ縻�� ����ϴ� ���α׷�
* 
* ��� ����: m_name, m_time
* ��� �Լ�: setName(), setTime()
*/

#include <iostream>
#include <string>

using namespace std;

class Greet {
private:
    string m_name;
    string m_time;

public:
    void greet() const {
        cout << m_name << "�� �ȳ��ϼ���, ���� " << m_time << "�Դϴ�!" << endl;
    }

    string getName() const {
        return m_name;
    }

    string getTime() const {
        return m_time;
    }

    void setName(const string name) {
        m_name = name;
    }

    void setTime(const string time) {
        m_time = time;
    }
};

int main() {
    Greet greetObj;
    string name, time;

    cout << "�̸��� �Է��ϼ���: ";
    getline(cin, name);

    // �ð���
    cout << "�ð��븦 �Է��ϼ��� (��: ��ħ, ����, ����): ";
    getline(cin, time);

    greetObj.setName(name);
    greetObj.setTime(time);

    greetObj.greet();

    return 0;
}
