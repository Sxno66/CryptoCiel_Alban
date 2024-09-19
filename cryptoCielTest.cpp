// RsaCiel.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "RsaGestion.h"
#include "Hashgestion.h"
#include "AesGestion.h"

int main()
{
	HashGestion LM;
	std::string file = "sxno.txt";
	std::cout << LM.CalculateFileSHA256(file) << std::endl;

	AesGestion Hibou;
	Hibou.GenerateAESKey();
	Hibou.SaveAESKeyToFile("aes_random.key");
	Hibou.EncryptFileAES256("sxno.txt", "sxnoencrypt.txt");
	Hibou.DecryptFileAES256("sxnoencrypt.txt", "sxnodecrypt.txt");


	Hibou.LoadAESKeyFromFile();
	Hibou.DecryptFileAES256();


	return 0;

}



