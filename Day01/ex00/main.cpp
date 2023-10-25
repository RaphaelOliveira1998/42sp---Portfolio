#include <iostream>
#include <vector>
#include "worker.hpp" 
#include "workshop.hpp"
#include "tool.hpp"
#include "shovel.hpp"
#include "hammer.hpp"

int main() {

    Worker worker01(10, 20, 30, 5, 100);
    Worker worker02(15, 30, 35, 7, 150);

    Shovel shovel01(0);
    Hammer hammer01(9);


        std::cout << "\n\n\nLocal de trabalho criado." << std::endl;
        Workshop workshop;
        Workshop workshop1;
        std::cout << "\nRegistrando trabalhadores..." << std::endl;
        workshop.registerWorker(&worker01);
        workshop1.registerWorker(&worker02);
        std::cout << "\nTrabalhadores registrados!" << std::endl;

        std::cout << "\nIniciando dia de trabalho..." << std::endl;
        workshop.executeDayWork();
        std::cout << "\nBom trabalho!" << std::endl;

        std::cout << "\nTrabalhador 01." << std::endl;
        std::cout << "Posição: (" <<
        worker01.coordonnee.x << ", " <<
        worker01.coordonnee.y << ", " <<
        worker01.coordonnee.z << ") " << std::endl;
        std::cout << "Nível: " << 
        worker01.stat.level << std::endl; 
        std::cout << "Experiência: " <<
        worker01.stat.exp << std::endl;

        std::cout << "\n\nTrabalhador 02." << std::endl;
        std::cout << "Posição: (" <<
        worker02.coordonnee.x << ", " <<
        worker02.coordonnee.y << ", " <<
        worker02.coordonnee.z << ") " << std::endl;
        std::cout << "Nível: " << 
        worker02.stat.level << std::endl; 
        std::cout << "Experiência: " <<
        worker02.stat.exp << std::endl;

        std::cout << "\n\nNúmero de usos da pá: " << shovel01.numberOfUses << std::endl;
        std::cout << "Número de usos do martelo: " << hammer01.numberOfUses << std::endl;

        std::cout << "\n\nEntregando ferramentas..." << std::endl;
        worker01.giveTool(&shovel01);
        worker01.giveTool(&hammer01);
        std::cout << "Ferramentas de worker01: " << worker01.tools.size() << std::endl;

        worker01.useTool(&shovel01);
        worker01.useTool(&hammer01);

        std::cout << "\n\nNúmero de usos da pá: " << shovel01.numberOfUses << std::endl;
        std::cout << "Número de usos do martelo: " << hammer01.numberOfUses << std::endl;

        std::cout << "\nTrabalhador 01 bateu o ponto." << std::endl;
        workshop.releaseWorker(&worker01);

        std::cout << "\n\nEntregando ferramentas..." << std::endl;
        worker02.giveTool((&shovel01));
        worker02.giveTool((&hammer01));

        std::cout << "Ferramentas de worker01: " << worker01.tools.size() << std::endl;
        std::cout << "Ferramentas de worker02: " << worker02.tools.size() << std::endl;

        worker02.useTool(&shovel01);
        worker02.useTool(&hammer01);

        std::cout << "\n\nNúmero de usos da pá: " << shovel01.numberOfUses << std::endl;
        std::cout << "Número de usos do martelo: " << hammer01.numberOfUses << std::endl;

        std::cout << "\nTrabalhador 01 saiu da obra." << std::endl;
    
    return 0;
}
