//
// Created by xiemenghui on 2018/7/20.
//

#include <iostream>
#include "SingletonPattern/SingletonMain.h"
#include "AbstractFactoryPattern/FactoryMain.h"
#include "AdapterPattern/AdapterMain.h"
#include "BridgePattern/BridgeMain.h"
#include "ObserverPattern/ObserverMain.h"

int main() {
    std::cout << "*******************" << std::endl;
    std::cout << "** 设计模式例子 **" << std::endl;
    std::cout << "*******************" << std::endl;

    // 单例模式
    SingletonMain();

    // 抽象工厂模式
    FactoryMain();

    // 适配器模式
    AdapterMain();

    // 桥接模式
    BridgeMain();

    // 观察者模式
    ObserverMain();

    return 0;
}