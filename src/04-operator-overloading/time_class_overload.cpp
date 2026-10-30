#include <iostream>
using namespace std;

class Time {
	int hours;
	int minutes;
public:
	Time(int h, int m) {
		hours = h;
		minutes = m;
	}
	Time operator +(Time& obj) {
		Time temp(0, 0);
		temp.hours = hours+obj.hours;
		temp.minutes = minutes+obj.minutes;

		if (temp.minutes > 60) {
			temp.hours += temp.minutes / 60;
			temp.minutes %= 60;
		}

		return temp;
	}
	void display() {
		cout << hours << " hours " << minutes << " minutes " << '\n';
	}
};

int main() {
	Time t1(10, 12);
	Time t2(2, 23);
	Time t3 = t1 + t2;
	t3.display();
}