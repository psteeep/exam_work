#include <iostream>
#include <string>
#include <conio.h>
//�������� ��������, ��� ������� � ������ ����� �� ����, ������ ����
//��� ����������� ����� �a� � ������ ���� � ����� �a�, �� ���� �� ����
//����� �b�(���������, ����� abrakadabra � 5 � 3).


int main() {


	
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
	}



	return 0;
}