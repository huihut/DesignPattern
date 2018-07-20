//
// Created by xiemenghui on 2018/7/20.
//

#include "Factory.h"
#include "product.h"
#include "FactoryMain.h"
#include <iostream>
using namespace std;

void FactoryMain()
{
    std::cout << "*******************" << std::endl;
    std::cout << "** 抽象工厂模式 **" << std::endl;
    std::cout << "*******************" << std::endl;

    // 奔驰
    Factory * pFactory = Factory::CreateFactory(Factory::FACTORY_TYPE::BENZ_FACTORY);
    ICar * pCar = pFactory->CreateCar();
    IBike * pBike = pFactory->CreateBike();

    cout << "Benz factory - Car: " << pCar->Name() << endl;
    cout << "Benz factory - Bike: " << pBike->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);

    // 宝马
    pFactory = Factory::CreateFactory(Factory::FACTORY_TYPE::BMW_FACTORY);
    pCar = pFactory->CreateCar();
    pBike = pFactory->CreateBike();
    cout << "Bmw factory - Car: " << pCar->Name() << endl;
    cout << "Bmw factory - Bike: " << pBike->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);

    // 奥迪
    pFactory = Factory::CreateFactory(Factory::FACTORY_TYPE::AUDI_FACTORY);
    pCar = pFactory->CreateCar();
    pBike = pFactory->CreateBike();
    cout << "Audi factory - Car: " << pCar->Name() << endl;
    cout << "Audi factory - Bike: " << pBike->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pBike);
    SAFE_DELETE(pFactory);
}