#include <iostream>
#include <map>

int main() {
	std::cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << std::endl;
	std::map<std::string, std::string> WHO;
	while (1) {
		std::cout << "����:1, �˻�:2, ����:3>>";
		int Start = 0;
		std::cin >> Start;

		if (Start == 1) {
			std::cout << "�̸� ��ȣ>> ";
			std::string Name, Password;
			std::cin >> Name >> Password;
			WHO.insert(make_pair(Name, Password));
		}
		else if (Start == 2) {
			int flag = 1;
			while (flag) {
				std::cout << "�̸�? ";
				std::string Name, Password;
				std::cin >> Name;

				if (WHO.find(Name) == WHO.end()) {
					std::cout << "�ش��ϴ� �̸��� �����ϴ�." << std::endl;
					flag = 0;
				}
				while (flag) {
					std::cout << "��ȣ��? ";
					std::cin >> Password;

					if (Password == WHO[Name]) {
						std::cout << "���!!" << std::endl;
						flag = 0;
					}
					else {
						std::cout << "����~~~" << std::endl;
					}
				}
			}
		}
		else if (Start == 3) {
			std::cout << "���α׷��� �����մϴ�..." << std::endl;
			break;
		}
	}
}