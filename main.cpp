#include <iostream>

    #include "input.h"

        #include <iomanip>

// Function menu -
void showMenu() {

    std::cout << "* * * * * CHOOSE FUNCTION * * * * *" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     1 >> Speed <<" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     2 >> Distance <<" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     3 >> Time <<" << std::endl;

    std::cout << "" << std::endl;

    std::cout << "     4 >> E X I T <<" << std::endl;

    std::cout << "" << std::endl;
}

int main() {

    int option;

    do

    {

        showMenu();

        getInput(option, "Choose (1 - 4): ");

        switch (option)

        {

        // calculate the speed            
        case 1: 

            double distanceCaseSpeed;            
            getInput(distanceCaseSpeed, "Enter distance in M (nautical miles): ");

            double timeCaseSpeed;
            getInput(timeCaseSpeed, "Time (in minutes): ");

            std::cout << std::setprecision(4) << 60 * distanceCaseSpeed / timeCaseSpeed << " knots" << std::endl;

            std::cout << "" << std::endl;

            continue;


        // calculate the distance
        case 2: 
            
            double speedCaseDistance;
            getInput(speedCaseDistance, "Speed in knots: ");

            double timeCaseDistance;
            getInput(timeCaseDistance, "Time (in minutes): ");

            std::cout << std::fixed << std::setprecision(2) << speedCaseDistance * timeCaseDistance / 60 << " nautical miles" << std::endl;

            std::cout << "" << std::endl;

            continue;
            
            
        // calculate the time in minutes
        case 3: 

            double distanceCaseTime;
            getInput(distanceCaseTime, "Distance (M): ");

            double speedCaseTime;
            getInput(speedCaseTime, "Speed in knots: ");

            double ResultDistanceSpeed = 60 * distanceCaseTime / speedCaseTime;

            double MinToHour = ResultDistanceSpeed / 60;

            int ResultTimeTotal = distanceCaseTime * 60 / speedCaseTime;
            
            
            
            //get number of hours
            int newHours = ResultTimeTotal / 60;

            //get number of minutes
            int newMins = ResultTimeTotal % 60;
            
            
            if (ResultTimeTotal > 120)

            {

                //std::cout << std::setprecision(4) << 60 * distanceCaseTime / speedCaseTime << " minutes (" << MinToHour << " hours)" << std::endl;

                std::cout << newHours << " hours and " << newMins << " minutes " << std::endl;

            }

            else

            {
                std::cout << newHours << " hour and " << newMins << " minutes " << std::endl;
            }
            
            std::cout << "" << std::endl;

            }

            } while (option != 4);

    return 0;

}