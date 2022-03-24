#include <iostream>
#include <cmath>

bool isChar(double val){
	return (std::isnan(val) || std::isinf(val) || val < 0 || val > 127);
}

bool isInt(double val){
	return (std::isnan(val) || std::isinf(val) || val < std::numeric_limits<int>::min() ||  val > std::numeric_limits<int>::max());
}

bool isFloat(double val){
	return (std::isnan(val) || std::isinf(val) || val < std::numeric_limits<float>::min() ||  val > std::numeric_limits<float>::max());
}

bool isDouble(double val){
	return (std::isnan(val) || std::isinf(val) || val < std::numeric_limits<double>::min() ||  val > std::numeric_limits<double>::max());
}

void displayChar(double val) {
	if (isChar(val))
		std::cout << "char: imposible \n";
	else if (!std::isprint(val))
		std::cout << "char: not displayable \n";
	else
		std::cout << "Char: " << static_cast<char>(val) << "\n";
}

void displayInt(double val){
	
	if (isInt(val))
		std::cout << "int: imposible \n";
	else
		std::cout << "Int: " << static_cast<int>(val) << "\n";
}

void displayFloat(std::string &value, double val){
	float floatV = static_cast<float>(val);
	std::cout << value.find('.') << "\n";
	if ((!(std::isnan(floatV) || std::isinf(floatV)) && (value.find('.') == std::string::npos)))
		std::cout << "Float: " << floatV << ".0f\n";
	else
		std::cout << "Float: " << floatV << "f\n";
}

void displayDouble(std::string &value, double val){
	if ((!(std::isnan(val) || std::isinf(val)) && value.find('.') == std::string::npos))
		std::cout << "Double: " << val << ".0\n";
	else
		std::cout << "Double: " << val << "\n";
}

int main(int argc, char **argv){
	
	std::string value;
	double tmpVal;

	if (argc != 2){
		std::cout << "Expected: ./convert <value>\n";
		return (1);
	}
	value = argv[1];
	tmpVal = std::strtod(value.c_str(), nullptr);
	if (tmpVal == 0 && !isdigit(value[0]) && value[1] == '\0')
		tmpVal = static_cast<double> (value[0]);
	displayChar(tmpVal);
	displayInt(tmpVal);
	displayFloat(value, tmpVal);
	displayDouble(value, tmpVal);
}