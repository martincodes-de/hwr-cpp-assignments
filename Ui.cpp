#include <iostream>
#include "Ui.h"

void Ui::start() {
    Ui ui;
    ui.run();
}

void Ui::run() {
    while (m_running){
        int input = displayMainMenuAndGetChoice();
        std::cout<<std::endl;

        switch (input) {
            case 1:
                readData();
                std::cout<<std::endl;
                break;
            case 2:
                outputInOrder();
                std::cout<<std::endl;
                break;
            case 3:
                outputSplit();
                std::cout<<std::endl;
                break;
            case 9:
                m_data.emplace_back(20.5, 10);
                m_data.emplace_back(21.5, 11);
                m_data.emplace_back(22.5, 12);
                break;
            case 10:
                m_running = false;
                break;
            default:
                std::cout<<"Wrong input, try again!"<<std::endl;
                std::cout<<std::endl;
                break;
        }
    }
}

int Ui::displayMainMenuAndGetChoice() {
    int input;
    std::cout<<"------------------------ Menu ------------------------"<<std::endl;
    std::cout<<"1. Read Data from Sensors"<<std::endl;
    std::cout<<"2. Display Data in chronological order"<<std::endl;
    std::cout<<"3. Display Data split into temp and lightning strikes"<<std::endl;
    std::cout<<"------------------------------------------------------"<<std::endl;
    std::cin>>input;
    return input;
}

void Ui::readData() {
    double avgTemp;
    int lightning;
    std::cout<<"--------------------- Read Data ----------------------"<<std::endl;
    std::cout<<"Enter average Temp since last reading:"<<std::endl;
    std::cin>>avgTemp;
    std::cout<<"Enter lightning strikes since last reading:"<<std::endl;
    std::cin>>lightning;
    std::cout<<"------------------------------------------------------"<<std::endl;

    m_data.emplace_back(avgTemp, lightning);
}

void Ui::outputInOrder() {
    std::cout<<"----------- Output in chronological Order ------------"<<std::endl;
    for (Reading dataPoint : m_data) {
        std::cout<<"   "<<dataPoint.toString()<< std::endl;
    }
    std::cout<<"------------------------------------------------------"<<std::endl;
}

void Ui::outputSplit() {
    std::cout<<"-- Output split into avg temp and lightning strikes --"<<std::endl;
    std::cout<<"Avg temps:"<<std::endl;
    for (Reading dataPoint : m_data) {
        std::cout<<"   "<<dataPoint.getAvgTempAsString()<< std::endl;
    }
    std::cout<<"# of lightning strikes:"<<std::endl;
    for (Reading dataPoint : m_data) {
        std::cout<<"   "<<dataPoint.getLightningAsString()<< std::endl;
    }
    std::cout<<"------------------------------------------------------"<<std::endl;

}
