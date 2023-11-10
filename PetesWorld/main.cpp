// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Kacper Borucki
//  or here
// add your name here
//  Dean Behan 
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}
	if (letter == 'b' || letter == 'B') // written by Kacper
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Bermuda, Bolivia, Belize, Barbados, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belgium, Belarus, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Botswana, Benin, Burkina, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bhutan, Bangladesh" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Bahrain Arabian Peninsula" << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C') // written by Kacper
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica, Cuba" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Congo, Cote D'ivoire" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos Island, Cyprus" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands, Cook Islands" << std::endl;
		}
	
	}
	if (letter == 'd' || letter == 'D') // written by Kacper
	{
		if (region == 1)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ds in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ds in the rest of the world" << std::endl;
		}
	}
	if (letter == 'e' || letter == 'E') // written by Kacper
	{
		if (region == 1)
		{
			std::cout << "Ecuador, El Salvador" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Estonia" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Equatorial Guinea, Ethiopia, Egypt" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "East Timor" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Es in the rest of the world" << std::endl;
		}
	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}