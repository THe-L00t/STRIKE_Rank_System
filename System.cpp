#include "System.h"

void System::inputRecord(const RankRecord& record)
{
	std::string ititle = std::to_string(record.outT().outY()) + "_" + std::to_string(record.outT().outM()) + "_" + record.bNumber() + ".txt";
	std::ofstream iout{ ititle ,std::ios::app};
}
