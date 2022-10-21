#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Yellow);
    shape.setPosition(sf::Vector2f(50, 150));

    sf::CircleShape circle(30);
    circle.setFillColor(sf::Color::White);
    circle.setPosition(sf::Vector2f(80, 70));

    sf::CircleShape circle1(85);
    circle1.setFillColor(sf::Color::Yellow);
    circle1.setPosition(sf::Vector2f(60, 30));

    sf::CircleShape circleojo1(30);
    circleojo1.setFillColor(sf::Color::White);
    circleojo1.setPosition(sf::Vector2f(150, 70));

    sf::CircleShape fondo(13);
    fondo.setFillColor(sf::Color::Black);
    fondo.setPosition(sf::Vector2f(160, 82));

    sf::CircleShape fondo2(13);
    fondo2.setFillColor(sf::Color::Black);
    fondo2.setPosition(sf::Vector2f(90, 82));

    sf::CircleShape boca(20, 3);
    boca.setFillColor(sf::Color::Red);
    boca.setPosition(sf::Vector2f(160, 170));
    boca.rotate(180);

    sf::CircleShape pelo(30, 3);
    pelo.setFillColor(sf::Color::Yellow);
    pelo.setPosition(sf::Vector2f(110, 4));

    sf::CircleShape braso(60, 3);
    braso.setFillColor(sf::Color::Yellow);
    braso.setPosition(sf::Vector2f(50, 150));
    braso.rotate(45);

    sf::CircleShape braso2(60, 3);
    braso2.setFillColor(sf::Color::Yellow);
    braso2.setPosition(sf::Vector2f(300, 180));
    braso2.rotate(85);

    sf::RectangleShape pierna(sf::Vector2f(200,5));
    pierna.rotate(90);
    pierna.setPosition(sf::Vector2f(200, 250));
    pierna.setFillColor(sf::Color::Yellow);

    sf::RectangleShape pierna2(sf::Vector2f(200, 5));
    pierna2.rotate(99);
    pierna2.setPosition(sf::Vector2f(130, 250));
    pierna2.setFillColor(sf::Color::Yellow);

      while (window.isOpen())
      {
         sf::Event event;
      while (window.pollEvent(event))
      {
      if (event.type == sf::Event::Closed)
                window.close();
      }

      window.clear();

              window.draw(circle);
              window.draw(circle1);
              window.draw(circleojo1);

       

      window.draw(shape);

        
              window.draw(circle1);
              window.draw(circleojo1);
              window.draw(circle);
              window.draw(fondo);
              window.draw(fondo2);
              window.draw(boca);
              window.draw(pelo);
              window.draw(braso);
              window.draw(braso2);
              window.draw(pierna);
              window.draw(pierna2);

          
      window.display();
    }
    return 0;
}
