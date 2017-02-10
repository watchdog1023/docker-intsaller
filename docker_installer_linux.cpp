#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>

using namespace std;

int main()
{
  	cout << " |||||	   ||||| " << endl;
	cout << " |   |	   |   | " << endl;
	cout << " |||||	   ||||| " << endl;
	cout << "       ||       " << endl;
	cout << " |	       | " << endl;
	cout << "  |	      | " << endl;
	cout << "   |||||||||| " << endl;
	cout << "Welcome to the Docker Install" << endl;
	cout << "Done by The Watch_dog" << endl;  
	string mystr;
  
	cout << "What Distro are running?(Enter only the number)" << endl;
	cout << "1)Wheezy" << endl;
	cout << "2)Jessie" << endl;
	cout << "3)Stretch/Sid" << endl;
	cin >> mystr;
  if (mystr == "1")
    {
      system ("echo deb http://ftp.debian.org/debian wheezy-backports main >> /etc/apt/sources.list.d/backports.list");
      system ("echo deb https://apt.dockerproject.org/repo debian-wheezy main >> /etc/apt/sources.list");
      system ("apt-get install apt-transport-https ca-certificates gnupg2");      
      system ("apt-get update");
      system ("apt-get install docker-engine");
      system ("service docker start");
      system ("update-rc.d docker enable");
    }

  if (mystr == "2")
    {
      system ("echo deb http://ftp.debian.org/debian jessie-backports main >> /etc/apt/sources.list.d/backports.list");
      system ("echo deb https://apt.dockerproject.org/repo debian-jessie main >> /etc/apt/sources.list");
      system ("apt-get install apt-transport-https ca-certificates gnupg2");      
      system ("apt-get update");
      system ("apt-get install docker-engine");
      system ("service docker start");
      system ("update-rc.d docker enable");
    }

  if (mystr == "3")
    {
      system ("echo deb https://apt.dockerproject.org/repo debian-stretch main >> /etc/apt/sources.list");
      system ("apt-get install apt-transport-https ca-certificates gnupg2");      
      system ("apt-get update");
      system ("apt-get install docker-engine");
      system ("service docker start");
      system ("update-rc.d docker enable");
    }
  return 0;
}

