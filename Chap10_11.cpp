#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Book {
	int year;
	std::string name;
	std::string book;
public:
	void set(int year, std::string name, std::string book) {
		this->year = year;
		this->name = name;
		this->book = book;
	}
	int getYear() {
		return this->year;
	}
	std::string getName() {
		return this->name;
	}
	std::string getBook() {
		return this->book;
	}
};

int main() {
	std::vector<Book> v;
	int Start = 0;
	while (1) {
		std::cout << "�԰� ���Ѵٸ� 1, �˻��� ���Ѵٸ� 2, �԰� ��Ȳ�� ���Ѵٸ� 3, ���Ḧ ���Ѵٸ� -1>>";
		std::cin >> Start;
		if (Start == 1) {
			std::cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << std::endl;
			Book Info;
			while (1) {
				std::cout << "�⵵>>";
				int year;
				std::cin >> year;
				if (year == -1)
					break;
				std::cin.ignore();
				std::cout << "����>>";
				char name[100];
				std::cin.getline(name, 100, '\n');
				std::cout << "å�̸�>>";
				char book[100];
				std::cin.getline(book, 100, '\n');
				if(year != -1) {
					Info.set(year, name, book);
					v.push_back(Info);
				}
			}
		}
		else if (Start == 2) {
			std::cout << "�� �԰�� å�� " << v.size() << "���Դϴ�." << std::endl;
			std::cout << "���Ḧ ���Ѵٸ� -1�� �Է��ϼ���." << std::endl;
			std::cin.ignore();
			char search[100];
			while (1) {
				std::cout << "�˻��ϰ��� �ϴ� ���� �̸� �Ǵ� �⵵�� �Է��ϼ���>>";
				std::cin.getline(search, 100, '\n');
				std::stringstream Input(search);
				int Year_search;
				if (Input >> Year_search) {
					int flag = 0;
					if (Year_search == -1)
						break;
					for (int i = 0; i < v.size(); i++) {
						if (v.at(i).getYear() == Year_search) {
							std::cout << v.at(i).getYear() << "�⵵, " << v.at(i).getBook() << ", " << v.at(i).getName() << std::endl;
							flag = 1;
						}
					}
					if(flag != 1)
						std::cout << Year_search << "�⵵�� �ش��ϴ� �԰�� å�� �����ϴ�." << std::endl;
				}
				else {
					int flag = 0;
					for (int i = 0; i < v.size(); i++) {
						if (v.at(i).getName() == search) {
							std::cout << v.at(i).getYear() << "�⵵, " << v.at(i).getBook() << ", " << v.at(i).getName() << std::endl;
							flag = 1;
						}
					}
					if(flag != 1)
						std::cout << search << "���ڿ� �ش��ϴ� �԰�� å�� �����ϴ�." << std::endl;
				}
			}
		}
		else if (Start == 3) {
			std::cout << "���� �԰�� å�� " << v.size() << "���Դϴ�." << std::endl;
		}
		else if(Start == -1)
			break;
	}
}