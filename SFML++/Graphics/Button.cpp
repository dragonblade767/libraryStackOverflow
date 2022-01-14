#include "Button.hpp"


Brabbadon::SFML::Graphics::Button::Button(int x, int y, std::string inputText)
{
    //im.loadFromFile("greenbut.png");
    //tex.loadFromImage(im);
    //body.setTexture(tex);
    body.setPosition(x, y);
    //font.loadFromFile("AtoZ_Regular.ttf");
    //text.setFont(font);
    text.setCharacterSize(30);
    text.setString(inputText);
    text.setOrigin(text.getGlobalBounds().width/2, text.getGlobalBounds().height/2 + 8);
    text.setPosition(x + body.getGlobalBounds().width/2, y + body.getGlobalBounds().height/2);

}
Brabbadon::SFML::Graphics::Button::Button()
{
    im.loadFromFile("greenbut.png");
    tex.loadFromImage(im);
    body.setTexture(tex);

    font.loadFromFile("AtoZ_Regular.ttf");
    text.setFont(font);
    text.setCharacterSize(30);

    text.setOrigin(text.getGlobalBounds().width/2, text.getGlobalBounds().height/2 + 8);
    text.setPosition(body.getGlobalBounds().width/2, body.getGlobalBounds().height/2);


}
Brabbadon::SFML::Graphics::Button::Button(std::string imagePath, std::string fontPath)
{
    im.loadFromFile(imagePath);
    tex.loadFromImage(im);
    body.setTexture(tex);

    font.loadFromFile(fontPath);
    text.setFont(font);
    text.setCharacterSize(30);

    text.setOrigin(text.getGlobalBounds().width/2, text.getGlobalBounds().height/2 + 8);
    text.setPosition(body.getGlobalBounds().width/2, body.getGlobalBounds().height/2);


}
void Brabbadon::SFML::Graphics::Button::draw(sf::RenderWindow &window)
{
    window.draw(body);
    window.draw(text);
}
void Brabbadon::SFML::Graphics::Button::setPosition(int x, int y)
{
    body.move(x, y);
    text.move(x, y);
}
bool Brabbadon::SFML::Graphics::Button::mouseHover(sf::RenderWindow &window)
{
    if (body.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
    {
        //body.setColor({1,1,1});
        return true;
    }
    else
    {
        //body.setTexture(tex);
        return false;
    }
}
bool Brabbadon::SFML::Graphics::Button::mouseClick(sf::RenderWindow &window)
{
    if (mouseHover(window) == true && sf::Mouse::isButtonPressed(sf::Mouse::Left))
        return true;
    else return false;
}
void Brabbadon::SFML::Graphics::Button::string(std::string someString)
{
    text.setString(someString);
    text.setOrigin(text.getGlobalBounds().width/2, text.getGlobalBounds().height/2 + 8);
    text.setPosition(body.getPosition().x + body.getGlobalBounds().width/2, body.getPosition().y + body.getGlobalBounds().height/2);
}
