#ifndef  MODEL_H
#define MODEL_H
#pragma once
#include "Body.h"
#include "Engine.h"
#include<vector>
enum EQUIPMENT { Enjoy, Dynamic, Elite, Unknown };

class Model {
private:
	std::string modelName;
	std::string generation;
	int yearOfProduction;

	std::vector<std::string> localization; //tablica salonow w ktorych jest dostepny
	
	std::string transmissionType; //automat lub manual
	int gears;
	std::string drive; // awd, fwd, rwd
	std::string engineName;

	Body body;
	Engine * engine;
	EQUIPMENT equipment;
	float price;

public:
	void DisplayModelInfo() const; // wyswietla wszystkie informacje o samochodzie
	float getPrice();
	Model(std::string mname, std::string gen, int yr, std::vector<std::string> loc,
		std::string trt, int grs, std::string drv, std::string ename, Body bdy,
		Engine *& engn, EQUIPMENT eq, float pr);
	~Model() {};

	//wskaznik na nastepny element - potrzebne do listy
	Model * next;

};
#endif