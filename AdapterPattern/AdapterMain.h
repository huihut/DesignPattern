//
// Created by xiemenghui on 2018/7/20.
//

#ifndef DESIGNPATTERN_ADAPTERMAIN_H
#define DESIGNPATTERN_ADAPTERMAIN_H

#include "adapter.h"

void AdapterMain()
{
    std::cout << "*******************" << std::endl;
    std::cout << "** 适配器模式 **" << std::endl;
    std::cout << "*******************" << std::endl;

    // 创建适配器
    IRussiaSocket * pAdapter = new PowerAdapter();

    // 充电
    pAdapter->Charge();

    SAFE_DELETE(pAdapter);
}

#endif //DESIGNPATTERN_ADAPTERMAIN_H
