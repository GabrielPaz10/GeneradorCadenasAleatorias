#pragma once
#include <stdlib.h>
#include <string>
#include <time.h>
class Generador
{
public: 
	
	Generador() {
		
	}

	std::string generado() {
		char rndom[15];
		std::string cadena="";
		srand(time(NULL));
		int num;
		for (int i = 0; i < 15; i++)
		{
			num= 48 + rand() % (122 - 48);
			if ((num>=48&&num<=57)|| (num >= 65 && num <= 90)|| (num >= 97 && num <= 122))
			{
				rndom[i] = num;
			}else {
				rndom[i]= 48 + rand() % (57 - 48);
			}
			
			cadena = cadena + rndom[i];
		}
		return cadena;
	}
};

