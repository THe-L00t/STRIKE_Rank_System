#pragma once
#include <vector>

#include <filesystem>

#include <fstream>
#include <iostream>
#include "Data.h"

#define DData "Rank"
#define IData "Individual"

class System
{
public:
	System() {
		r.reserve(100);
		if (!std::filesystem::exists(DData)) {
			std::filesystem::create_directory(DData);
		}
		if (!std::filesystem::exists(IData)) {
			std::filesystem::create_directory(IData);
		}
	}

	void inputRecord(const RankRecord&);
private:
	std::vector<Rank> r;
};

