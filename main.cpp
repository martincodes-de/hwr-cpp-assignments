#include <iostream>
#include "Matrix.h"

/*
Bearbeiten Sie die Aufgaben der Reihe nach direkt im Quellcode.
Sie können die Beschreibungen zur Aufgabenstellung löschen, aber bitte
lassen Sie die Markierungen, wo welche Aufgabe beginnt im Quellcode!

Hinweis: Bitte geben Sie nur die Quelldateien ohne das Visual Studio Projekt ab!
*/

Matrix33 operator*(int scalar,Matrix33 &other){
    return other * scalar;
}

int main() {


    // ------------------------------------------------------------------------
    // 1. Aufgabe (Referenzen)
    // ------------------------------------------------------------------------

    std::cout << "\n\nAufgabe 1\n=========\n" << std::endl;

    // Wo steckt der eigentliche Konstruktoraufruf bei der folgenden Anweisung?
        //Der Konstruktor wird erst in der Methode ones() in Matrix.cpp aufgerufen.

    // Wieso kann die Funktion ones() mit dem Scope-Operator, ohne Objekt aufgerufen werden?
        //Weil ones() als static deklariert worden ist, kann sie unabhängig von einem Objekt verwendet werden.

    Matrix33 mat1 = Matrix33::ones();

    // Über die Funktion Matrix33::get können sie einen Wert in der Matrix abfragen:
    std::cout << "Wert in Matrix(2,2): " << mat1.get(1, 1) << std::endl;

    // verändern Sie die Funktion Matrix33::get so,
    // dass Sie über diese Funktion auch Werte verändern können:
    // Hinweis: Rückgabewert als Referenz
    mat1.get(1, 1) = 5;

    std::cout << mat1.toString() << std::endl;


    // ------------------------------------------------------------------------
    // 2. Aufgabe (Operatoren)
    // ------------------------------------------------------------------------

    std::cout << "\n\nAufgabe 2\n=========\n" << std::endl;

    Matrix33 matA(-1, 0, 3, 2, -2.5, 1, -4, 1.5, -1);
    Matrix33 matB(1, 0, 1, 1.5, 0, 0, 2.5, -1.5, -2);

    // Implementieren Sie die nötigen Operatoren in der Klasse, damit folgende
    // Ausdrücke richtig funktionieren und geben Sie nach jeder Rechnung die Ergebnisse aus:

    Matrix33 matResult1 = matA + matB;
    std::cout<<"matA + matB ="<<std::endl<<matResult1.toString()<<std::endl<<std::endl;
    Matrix33 matResult2 = matA * matB;
    std::cout<<"matA * matB ="<<std::endl<<matResult2.toString()<<std::endl<<std::endl;
    Matrix33 matResult3 = matA * 5;
    std::cout<<"matA * 5 ="<<std::endl<<matResult3.toString()<<std::endl<<std::endl;
    matResult1 += matB;
    std::cout<<"matResult1 += matB ="<<std::endl<<matResult1.toString()<<std::endl<<std::endl;
    Matrix33 matC = matResult2 += matB;
    std::cout<<"matResult2 += matB ="<<std::endl<<matC.toString()<<std::endl<<std::endl;

    // ------------------------------------------------------------------------
    // 3. Aufgabe (Operatoren)
    // ------------------------------------------------------------------------

    std::cout << "\n\nAufgabe 3\n=========\n" << std::endl;

    // Testen Sie folgende Anweisung:
    Matrix33 matResult4 = 5 * matA;
    std::cout<<"5 * matA ="<<std::endl<<matResult4.toString()<< std::endl;

    // Warum funktioniert die Anweisung nicht? Lösen Sie das Problem!
        // Beim Operatoren überladen wird immer die Operation vom linken Operanten genutzt. Weil in diesem Fall der
        // Integer 5 links steht, wird der Operator, der in Aufgabe 2 implementiert wurde nicht gefunden.



    // ------------------------------------------------------------------------
    // 4. Aufgabe (Konvertierungsoperator)
    // ------------------------------------------------------------------------

    std::cout << "\n\nAufgabe 4\n=========\n" << std::endl;

    Matrix33 matZ(1, 3, 5, 1, -2, 1, 1.5, 3.5, -4);
    // Erzeugen Sie einen Konvertierungsoperator, sodass folgender Ausdruck klappt.
     double det = matZ;
     std::cout<<"det(matZ) = "<<det<<std::endl;

    // Der Konvertierungsoperator soll die Determinante der Matrix zurückgeben.
    // Hinweis: http://de.wikipedia.org/wiki/Determinante#Berechnung

    // ------------------------------------------------------------------------
    // 5. Aufgabe (Exception)
    // ------------------------------------------------------------------------

    std::cout << "\n\nAufgabe 5\n=========\n" << std::endl;

    Matrix33 matX(1, 3, 5, 1, -2, 1, 1.5, 3.5, -4);
    // Implementieren Sie ein Exceptionhandling mit einer extra definierten
    // Exceptionklasse. Ein Objekt dieser Klasse soll geworfen werden, wenn
    // bei der Verwendung der get-Funktion fehlerhafte Indizes eingegeben werden
    // z.B.

    double y = matX.get(3, 3);

    return 0;
}
