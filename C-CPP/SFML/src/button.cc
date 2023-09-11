#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Button Example");

    sf::RectangleShape button(sf::Vector2f(200, 50));
    button.setPosition(300, 250);
    sf::Color buttonColor = sf::Color::Blue;
    button.setFillColor(buttonColor);

    bool buttonClicked = false;

    sf::Clock clock; // Membuat objek sf::Clock

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed)
            {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                sf::Vector2f buttonPos = button.getPosition();
                sf::Vector2f buttonSize = button.getSize();

                if (mousePos.x >= buttonPos.x && mousePos.x <= buttonPos.x + buttonSize.x &&
                    mousePos.y >= buttonPos.y && mousePos.y <= buttonPos.y + buttonSize.y)
                {
                    // Tombol diklik
                    buttonColor = sf::Color::Red; // Ubah warna tombol menjadi merah
                    button.setFillColor(buttonColor);
                    buttonClicked = true;
                }
            }
        }

        if (buttonClicked)
        {
            // Tambahkan logika untuk mengembalikan warna tombol ke semula setelah beberapa waktu
            sf::Time elapsedTime = clock.getElapsedTime();
            if (elapsedTime.asSeconds() >= 0.5) // Ganti angka ini sesuai kebutuhan
            {
                buttonColor = sf::Color::Blue; // Kembalikan warna tombol menjadi biru
                button.setFillColor(buttonColor);
                buttonClicked = false;
                clock.restart();
            }
        }

        window.clear();
        window.draw(button);
        window.display();
    }

    return 0;
}
