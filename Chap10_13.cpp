#include <iostream>
#include <map>
#include <string>

int main() {
	std::cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ� *****" << std::endl;
	std::map<std::string, int> Student;
	while (1) {
		std::cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		int Start = 0;
		std::cin >> Start;

		if (Start == 1) {
			std::string name;
			int score = 0;
			std::cout << "�̸��� ����>>";
			std::cin >> name >> score;
			Student.insert(make_pair(name, score));
		}

		else if (Start == 2) {
			std::string name;
			std::cout << "�̸�>> ";
			std::cin >> name;
			if (Student.find(name) == Student.end())
				std::cout << "�������� �ʽ��ϴ�." << std::endl;
			else
				std::cout << name << "�� ������ " << Student[name] << "���Դϴ�. " << std::endl;
		}

		else if (Start == 3)
			break;
	}
}