/*
* 사용자의 정보(이름과 시간대)를 받아서, 정보에 맞는 인사말을 출력하는 프로그램
* 
* 멤버 변수: m_name, m_time
* 멤버 함수: setName(), setTime()
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
        cout << m_name << "님 안녕하세요, 좋은 " << m_time << "입니다!" << endl;
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

    cout << "이름을 입력하세요: ";
    getline(cin, name);

    // 시간대
    cout << "시간대를 입력하세요 (예: 아침, 오후, 저녁): ";
    getline(cin, time);

    greetObj.setName(name);
    greetObj.setTime(time);

    greetObj.greet();

    return 0;
}
