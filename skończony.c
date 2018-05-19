using System;

namespace ConsoleApp1
{
    class Randx
    {
        public int los()
        {
            Random x = new Random();
            int y = x.Next(5, 21);
            return y;
        }

        public int los1()
        {
            Random x = new Random();
            int y = x.Next(50, 151);
            return y;
        }

        public int los2()
        {
            Random x = new Random();
            int y = x.Next(50, 101);
            return y;
        }

        public int los3()
        {
            Random x = new Random();
            int y = x.Next(1, 5);
            return y;
        }
    }

    class Statystyki
    {
        public int sila;
        public int zwinnosc;
        public int mana;
        public int szczescie;
        public int inteligencja;

        public void losujw()
        {

            Randx wynik = new Randx();

            sila = wynik.los() + 10;
            System.Console.WriteLine("Sila (w tym bonus +10): " + sila);
            zwinnosc = wynik.los() + 5;
            System.Console.WriteLine("Zwinnosc (w tym bonus +5): " + zwinnosc);
            mana = wynik.los();
            System.Console.WriteLine("Mana: " + mana);
            szczescie = wynik.los();
            System.Console.WriteLine("Szczescie: " + szczescie);
            inteligencja = wynik.los();
            System.Console.WriteLine("Inteligencja: " + inteligencja);

        }

        public void losujm()
        {

            Randx wynik = new Randx();

            sila = wynik.los();
            System.Console.WriteLine("Sila: " + sila);
            zwinnosc = wynik.los();
            System.Console.WriteLine("Zwinnosc: " + zwinnosc);
            mana = wynik.los() + 20;
            System.Console.WriteLine("Mana (w tym bonus +20): " + mana);
            szczescie = wynik.los();
            System.Console.WriteLine("Szczescie: " + szczescie);
            inteligencja = wynik.los() + 5;
            System.Console.WriteLine("Inteligencja (w tym bonus +5): " + inteligencja);

        }

        public void losujz()
        {

            Randx wynik = new Randx();

            sila = wynik.los();
            System.Console.WriteLine("Sila: " + sila);
            zwinnosc = wynik.los() + 10;
            System.Console.WriteLine("Zwinnosc (w tym bonus +10): " + zwinnosc);
            mana = wynik.los();
            System.Console.WriteLine("Mana: " + mana);
            szczescie = wynik.los() + 10;
            System.Console.WriteLine("Szczescie (w tym bonus +10): " + szczescie);
            inteligencja = wynik.los();
            System.Console.WriteLine("Inteligencja: " + inteligencja);

        }


    }

    class Pancerz
    {
        public int obrona;
        public int obrona_magiczna;
        public int wytrzymalosc;
        public int ciezar;


        public void losujl()
        {

            Randx wynik = new Randx();

            obrona = wynik.los1();
            System.Console.WriteLine("Obrona: " + obrona);
            obrona_magiczna = wynik.los1();
            System.Console.WriteLine("Obrona magiczna: " + obrona_magiczna);
            wytrzymalosc = wynik.los1();
            System.Console.WriteLine("Wytrzymalosc: " + wytrzymalosc);
            ciezar = wynik.los1();
            System.Console.WriteLine("Ciezar (w tym bonus -20): " + ciezar);

        }

        public void losujc()
        {

            Randx wynik = new Randx();

            obrona = wynik.los1();
            System.Console.WriteLine("Obrona: (w tym bonus +10):  " + obrona);
            obrona_magiczna = wynik.los1();
            System.Console.WriteLine("Obrona magiczna: " + obrona_magiczna);
            wytrzymalosc = wynik.los1();
            System.Console.WriteLine("Wytrzymalosc (w tym bonus +10): " + wytrzymalosc);
            ciezar = wynik.los1();
            System.Console.WriteLine("Ciezar: " + ciezar);

        }
    }

    class Bron
    {
        public int obrazenia;
        public int obrazenia_magiczne;
        public int wytrzymalosc;
        public int ciezar;

        public void losujw()
        {

            Randx wynik = new Randx();

            obrazenia = wynik.los2();
            System.Console.WriteLine("Obrazenia: " + obrazenia);
            wytrzymalosc = wynik.los2() + 10;
            System.Console.WriteLine("Wytrzymalosc (w tym bonus +10): " + wytrzymalosc);
            ciezar = wynik.los2() - 5;
            System.Console.WriteLine("Ciezar (w tym bonus -10): " + ciezar);

        }

        public void losujw1()
        {

            Randx wynik = new Randx();

            obrazenia = wynik.los2() + 20;
            System.Console.WriteLine("Obrazenia (w tym bonus +20): " + obrazenia);
            wytrzymalosc = wynik.los2();
            System.Console.WriteLine("Wytrzymalosc: " + wytrzymalosc);
            ciezar = wynik.los2();
            System.Console.WriteLine("Ciezar: " + ciezar);

        }

        public void losujm()
        {

            Randx wynik = new Randx();

            obrazenia_magiczne = wynik.los2();
            System.Console.WriteLine("Obrazenia magiczne: " + obrazenia_magiczne);
            wytrzymalosc = wynik.los2() + 5;
            System.Console.WriteLine("Wytrzymalosc (w tym bonus +5): " + wytrzymalosc);
            ciezar = wynik.los2() - 10;
            System.Console.WriteLine("Ciezar (w tym bonus -10): " + ciezar);

        }

        public void losujm1()
        {

            Randx wynik = new Randx();

            obrazenia_magiczne = wynik.los2() + 15;
            System.Console.WriteLine("Obrazenia magiczne (w tym bonus +15): " + obrazenia_magiczne);
            wytrzymalosc = wynik.los2();
            System.Console.WriteLine("Wytrzymalosc: " + wytrzymalosc);
            ciezar = wynik.los2();
            System.Console.WriteLine("Ciezar: " + ciezar);

        }

        public void losujz()
        {

            Randx wynik = new Randx();

            obrazenia = wynik.los2();
            System.Console.WriteLine("Obrazenia: " + obrazenia);
            wytrzymalosc = wynik.los2() + 5;
            System.Console.WriteLine("Wytrzymalosc (w tym bonus +5): " + wytrzymalosc);
            ciezar = wynik.los2() - 10;
            System.Console.WriteLine("Ciezar (w tym bonus -10): " + ciezar);

        }

        public void losujz1()
        {

            Randx wynik = new Randx();

            obrazenia = wynik.los2() + 15;
            System.Console.WriteLine("Obrazenia (w tym bonus +15): " + obrazenia);
            obrazenia_magiczne = wynik.los2();
            System.Console.WriteLine("Obrazenia magiczne: " + obrazenia_magiczne);
            wytrzymalosc = wynik.los2();
            System.Console.WriteLine("Wytrzymalosc: " + wytrzymalosc);
            ciezar = wynik.los2();
            System.Console.WriteLine("Ciezar: " + ciezar);

        }

    }


    class Program
    {
        static void Main()
        {

            int k = 0;

            System.Console.WriteLine();
            System.Console.WriteLine("Witaj w generatorze postaci!");
            System.Console.WriteLine("Podazaj za intrukcjami aby wygenerowac postac.");
            System.Console.WriteLine();
            System.Console.WriteLine();

        a:

            System.Console.WriteLine("Wybierz klase postaci. Kazda ma inny bonus do statystyk.");
            System.Console.WriteLine();
            Console.ForegroundColor = ConsoleColor.Blue;
            System.Console.WriteLine("Wojownik: 1");
            System.Console.WriteLine("Mag: 2");
            System.Console.WriteLine("Zlodziej: 3");
            Console.ResetColor();

            Statystyki pst = new Statystyki();
            Pancerz pancerz = new Pancerz();
            Bron bron = new Bron();
            Randx wynik = new Randx();

            System.Console.WriteLine();
            int postac = System.Convert.ToInt32(System.Console.ReadLine());

        b:

            System.Console.WriteLine();
            if (postac == 1)
            {
                Console.ForegroundColor = ConsoleColor.Blue;
                System.Console.WriteLine("Statystyki postaci:");
                Console.ResetColor();
                System.Console.WriteLine();
                pst.losujw();
                System.Console.WriteLine();

            c:

                System.Console.WriteLine("Wybierz rodzaj pancerza:");
                System.Console.WriteLine();
                Console.ForegroundColor = ConsoleColor.Red;
                System.Console.WriteLine("1 - Lekki");
                System.Console.WriteLine("2 - Ciezki");
                Console.ResetColor();
                System.Console.WriteLine();
                int pancerzw = System.Convert.ToInt32(System.Console.ReadLine());
                System.Console.WriteLine();
                if (pancerzw == 1)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    System.Console.WriteLine("Statystyki pancerza:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    pancerz.losujl();
                    System.Console.WriteLine();
                }

                else if (pancerzw == 2)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    System.Console.WriteLine("Statystyki pancerza:"); ;
                    Console.ResetColor();
                    System.Console.WriteLine();
                    pancerz.losujc();
                    System.Console.WriteLine();

                }

                else
                {

                    System.Console.WriteLine("Zla wartosc, sprobuj ponownie.");
                    goto c;

                }

            d:

                System.Console.WriteLine("Wybierz bron:");
                System.Console.WriteLine();
                Console.ForegroundColor = ConsoleColor.Green;
                System.Console.WriteLine("1 - Miecz");
                System.Console.WriteLine("2 - Wlocznia");
                Console.ResetColor();
                System.Console.WriteLine();
                int bronw = System.Convert.ToInt32(System.Console.ReadLine());
                System.Console.WriteLine();
                if (bronw == 1)
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    System.Console.WriteLine("Statystyki broni:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    bron.losujw();
                    System.Console.WriteLine();
                }

                else if (bronw == 2)
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    System.Console.WriteLine("Statystyki broni:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    bron.losujw1();
                    System.Console.WriteLine();

                }

                else
                {

                    System.Console.WriteLine("Zla wartosc, sprobuj ponownie.");
                    goto d;

                }
            }


            else if (postac == 2)
            {
                Console.ForegroundColor = ConsoleColor.Blue;
                System.Console.WriteLine("Statystyki postaci:");
                Console.ResetColor();
                System.Console.WriteLine();
                pst.losujm();
                System.Console.WriteLine();

            e:

                System.Console.WriteLine("Wybierz rodzaj pancerza:");
                System.Console.WriteLine();
                Console.ForegroundColor = ConsoleColor.Red;
                System.Console.WriteLine("1 - Lekki");
                System.Console.WriteLine("2 - Ciezki");
                Console.ResetColor();
                System.Console.WriteLine();
                int pancerzm = System.Convert.ToInt32(System.Console.ReadLine());
                System.Console.WriteLine();
                if (pancerzm == 1)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    System.Console.WriteLine("Statystyki pancerza:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    pancerz.losujl();
                    System.Console.WriteLine();
                }

                else if (pancerzm == 2)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    System.Console.WriteLine("Statystyki pancerza:"); ;
                    Console.ResetColor();
                    System.Console.WriteLine();
                    pancerz.losujc();
                    System.Console.WriteLine();

                }

                else
                {

                    System.Console.WriteLine("Zla wartosc, sprobuj ponownie.");
                    goto e;

                }

            f:

                System.Console.WriteLine("Wybierz bron:");
                System.Console.WriteLine();
                Console.ForegroundColor = ConsoleColor.Green;
                System.Console.WriteLine("1 - Rozdzka");
                System.Console.WriteLine("2 - Kostur");
                Console.ResetColor();
                System.Console.WriteLine();
                int bronm = System.Convert.ToInt32(System.Console.ReadLine());
                System.Console.WriteLine();
                if (bronm == 1)
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    System.Console.WriteLine("Statystyki broni:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    bron.losujm();
                    System.Console.WriteLine();
                }

                else if (bronm == 2)
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    System.Console.WriteLine("Statystyki broni:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    bron.losujm1();
                    System.Console.WriteLine();

                }

                else
                {

                    System.Console.WriteLine("Zla wartosc, sprobuj ponownie.");
                    goto f;

                }
            }
            else if (postac == 3)
            {
                Console.ForegroundColor = ConsoleColor.Blue;
                System.Console.WriteLine("Statystyki postaci:");
                Console.ResetColor();
                System.Console.WriteLine();
                pst.losujz();
                System.Console.WriteLine();

            g:

                System.Console.WriteLine("Wybierz rodzaj pancerza:");
                System.Console.WriteLine();
                Console.ForegroundColor = ConsoleColor.Red;
                System.Console.WriteLine("1 - Lekki");
                System.Console.WriteLine("2 - Ciezki");
                Console.ResetColor();
                System.Console.WriteLine();
                int pancerzz = System.Convert.ToInt32(System.Console.ReadLine());
                System.Console.WriteLine();
                if (pancerzz == 1)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    System.Console.WriteLine("Statystyki pancerza:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    pancerz.losujl();
                    System.Console.WriteLine();
                }

                else if (pancerzz == 2)
                {
                    Console.ForegroundColor = ConsoleColor.Red;
                    System.Console.WriteLine("Statystyki pancerza:"); ;
                    Console.ResetColor();
                    System.Console.WriteLine();
                    pancerz.losujc();
                    System.Console.WriteLine();

                }

                else
                {

                    System.Console.WriteLine("Zla wartosc, sprobuj ponownie.");
                    goto g;

                }

            h:

                System.Console.WriteLine("Wybierz bron:");
                System.Console.WriteLine();
                Console.ForegroundColor = ConsoleColor.Green;
                System.Console.WriteLine("1 - Sztylet");
                System.Console.WriteLine("2 - Luk");
                Console.ResetColor();
                System.Console.WriteLine();
                int bronz = System.Convert.ToInt32(System.Console.ReadLine());
                System.Console.WriteLine();
                if (bronz == 1)
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    System.Console.WriteLine("Statystyki broni:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    bron.losujz();
                    System.Console.WriteLine();
                }

                else if (bronz == 2)
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    System.Console.WriteLine("Statystyki broni:");
                    Console.ResetColor();
                    System.Console.WriteLine();
                    bron.losujz1();
                    System.Console.WriteLine();

                }

                else
                {

                    System.Console.WriteLine("Zla wartosc, sprobuj ponownie.");
                    goto h;

                }
            }

            else
            {

                System.Console.WriteLine("Zla wartosc, sprobuj ponownie");
                goto a;

            }

            int a = wynik.los3();

            k = k + 1;
            if (k < 2)

            {
                System.Console.WriteLine();
                System.Console.WriteLine("Wylosowany przedmiot:");
                System.Console.WriteLine();

                if (a == 1)
                {
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    System.Console.Write("Akcesorium: ");
                    Console.ResetColor();
                    System.Console.WriteLine("Mikstura Zdrowia (50)");
                }
                else if (a == 2)
                {
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    System.Console.Write("Akcesorium: ");
                    Console.ResetColor();
                    System.Console.WriteLine("Mikstura Many (50)");
                }
                else if (a == 3)
                {
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    System.Console.Write("Akcesorium: ");
                    Console.ResetColor();
                    System.Console.WriteLine("Kolczyki szybkosc poruszania +10");
                }

                else
                {

                    System.Console.Write("Wylosowales ");
                    Console.ForegroundColor = ConsoleColor.Yellow;
                    System.Console.Write("Zwoj Zapomnienia");
                    Console.ResetColor();
                    System.Console.WriteLine(". Pozwoli ci to zresetowac statystyki. Czy chcesz zresetowac statystyki?");
                    System.Console.WriteLine("Czy chcesz zresetowac statystyki? 1 = Tak 2 = Nie");

                    System.Console.WriteLine();
                    int reset = System.Convert.ToInt32(System.Console.ReadLine());

                    if (reset == 1)
                    {
                        goto b;
                    }

                }
            }

            else
            {


            }

            System.Console.WriteLine();
            System.Console.WriteLine();
            Console.ForegroundColor = ConsoleColor.Green;
            System.Console.WriteLine("Milej gry!");
            Console.ResetColor();

            System.Console.ReadKey();
        }
    }
}


