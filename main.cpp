#include <iostream>
#include <string>
#include <conio.h>

//�������� ��������, ��� ������� � ������ ����� �� ����, ������ ����
//��� ����������� ����� �a� � ������ ���� � ����� �a�, �� ���� �� ����
//����� �b�(���������, ����� abrakadabra � 5 � 3).


int main() {

	int count_a_all = 0;
	int count_a_before = 0;

	char text[1024];
	std::cout << "enter row: ";
	
	for (int i = 0; i < 1024; i++)
	{
		text[i] = _getch(); 
		if (text[i] == 13) // ������ /n  
			break;
		else
		{
			
			putchar(text[i]);  
		}
	
		if (text[i] == 'a')
			count_a_all++;

		if (text[i] == 'a' && text[i + 1] != 'b')
			count_a_before++;
	}
	std::cout << std::endl;

	std::cout << "Numb of a-sym at all = " << count_a_all << std::endl;
	std::cout << "Numb of a-sym NOT before b-sym = " << count_a_before << std::endl;

	return 0;
}