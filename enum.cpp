#include <iostream>
#include <string>

enum japan {
	toyota,
	nissan,
	mitsubishi,
	subaru,
	mazda,
	suzuki,
	isuzu,
	datsun,
};
enum europe {
	mercedes,
	bmw,
	volkswagen,
	audi,
	porsche,
	opel,
	lotus,
	mclaren,
	alfaromeo,
	astonmartin,
};

class cars {
	void convert_j() {
		for (int i = 0; i < 8; i++)
		{
			switch (i)
			{
			case toyota:
				arr1[i] = "toyota";
				break;
			case nissan:
				arr1[i] = "nissan";
				break;
			case mitsubishi:
				arr1[i] = "mitsubishi";
				break;
			case subaru:
				arr1[i] = "subaru";
				break;
			case mazda:
				arr1[i] = "mazda";
				break;
			case suzuki:
				arr1[i] = "suzuki";
				break;
			case isuzu:
				arr1[i] = "isuzu";
				break;
			case datsun:
				arr1[i] = "datsun";
				break;
			default:
				std::cout << "error" << std::endl;
				break;
			}
		}
	}
	void convert_e() {
		for (int i = 0; i < 10; i++)
		{
			switch (i)
			{
			case mercedes:
				arr2[i] = "mercedes";
				break;
			case bmw:
				arr2[i] = "bmw";
				break;
			case volkswagen:
				arr2[i] = "volkswagen";
				break;
			case audi:
				arr2[i] = "audi";
				break;
			case porsche:
				arr2[i] = "porsche";
				break;
			case opel:
				arr2[i] = "opel";
				break;
			case lotus:
				arr2[i] = "lotus";
				break;
			case mclaren:
				arr2[i] = "mclaren";
				break;
			case alfaromeo:
				arr2[i] = "alfaromeo";
				break;
			case astonmartin:
				arr2[i] = "astonmartin";
				break;
			default:
				std::cout << "error" << std::endl;
				break;
			}
		}
	}
	std::string* arr1;
	std::string* arr2;
public:
	cars() {
		arr1 = new std::string[8];
		arr2 = new std::string[10];
		convert_e();
		convert_j();
	}
	std::string get_j(japan j) {
		return arr1[j];
	}
	std::string get_e(europe e) {
		return arr2[e];
	}
	~cars() {
		delete[] arr1;
		delete[] arr2;
	}
};

int main() {
	cars car;
	std::cout << car.get_e(astonmartin) << std::endl;
	std::cout << car.get_j(toyota) << std::endl;
}