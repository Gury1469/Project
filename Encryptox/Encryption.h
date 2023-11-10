#pragma once
#include<fstream>
#include<iostream>
#include<sstream>


const int privateKey = 5;


class Encryption
{
	std::fstream file;
	std::string pass;
	std::string encrypted;
	std::string decrypted;

public:
	int encryptFlag = 0;
	int decryptFlag = 0;

public:
	void Encrypt(std::string fileName, std::string pass)
	{
		file.open(fileName, std::ios::in | std::ios::out);
		
		char temp;
		int i = 0;
		while (!file.eof())
		{
			file.get(temp);
			if (i == pass.length() - 1)
				i = 0;
			
			encrypted += (temp ^ pass[i]) + privateKey;
			i++;
		}
		file.clear();
		file.seekp(0, std::ios::beg);
		file << encrypted;
		encrypted = "";
		if (file.good())
			encryptFlag = 1;

		file.close();

	}


	void Decrypt(std::string fileName, std::string pass)
	{
		file.open(fileName, std::ios::in | std::ios::out);

		char temp;
		int i = 0;
		while (!file.eof())
		{
			file.get(temp);
			if (i == pass.length() - 1)
				i = 0;

			decrypted += (temp - privateKey) ^ pass[i];
			i++;
		}
		file.clear();
		file.seekp(0, std::ios::beg);
		file << decrypted;
		decrypted = "";
		if (file.good())
			decryptFlag = 1;
		file.close();

	}

};

