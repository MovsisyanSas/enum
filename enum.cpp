#include <iostream>
#include <string>



class cars {
public:
	cars() {

	}
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
	std::string convert_j_str(japan i) {

		switch (i)
		{
		case toyota:
			return "toyota";
		case nissan:
			return "nissan";
		case mitsubishi:
			return "mitsubishi";
		case subaru:
			return "subaru";
		case mazda:
			return "mazda";
		case suzuki:
			return "suzuki";
		case isuzu:
			return "isuzu";
		case datsun:
			return "datsun";
		default:
			return "error";
		}
	}
	std::string convert_e_str(europe i) {

		switch (i)
		{
		case mercedes:
			return "mercedes";
		case bmw:
			return "bmw";
		case volkswagen:
			return "volkswagen";
		case audi:
			return "audi";
		case porsche:
			return "porsche";
		case opel:
			return "opel";
		case lotus:
			return "lotus";
		case mclaren:
			return "mclaren";
		case alfaromeo:
			return "alfaromeo";
		case astonmartin:
			return "astonmartin";
		default:
			return "error";
		}
	}
	europe convert_e_enum(std::string s) {
		if (s == "mercedes")
		{
			return mercedes;
		}
		else if (s == "bmw")
		{
			return bmw;
		}
		else if (s == "volkswagen")
		{
			return volkswagen;
		}
		else if (s == "audi")
		{
			return audi;
		}
		else if (s == "porsche")
		{
			return porsche;
		}
		else if (s == "opel")
		{
			return opel;
		}
		else if (s == "lotus")
		{
			return lotus;
		}
		else if (s == "mclaren")
		{
			return mclaren;
		}
		else if (s == "alfaromeo")
		{
			return alfaromeo;
		}
		else if (s == "astonmartin")
		{
			return astonmartin;
		}
		else {
			abort();
		}
	}
	japan convert_j_enum(std::string s) {
		if (s == "toyota")
		{
			return toyota;
		}
		else if (s == "nissan")
		{
			return nissan;
		}
		else if (s == "mitsubishi")
		{
			return mitsubishi;
		}
		else if (s == "subaru")
		{
			return subaru;
		}
		else if (s == "mazda")
		{
			return mazda;
		}
		else if (s == "suzuki")
		{
			return suzuki;
		}
		else if (s == "isuzu")
		{
			return isuzu;
		}
		else if (s == "datsun")
		{
			return datsun;
		}
		else {
			abort();
		}
	}

	~cars() {
	}
};

int main() {
	cars car;
	std::cout << car.convert_e_str(cars::lotus) << std::endl;
	std::cout << car.convert_e_enum("lotus") << std::endl;
	std::cout << car.convert_j_str(cars::mazda) << std::endl;
	std::cout << car.convert_j_enum("mazda") << std::endl;
}
