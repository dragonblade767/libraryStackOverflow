#include "Text.hpp"

Brabbadon::SFML::Graphics::Text::Text()
{
    font_.loadFromFile("Assets/fonts/arial.ttf");
    this->setFont(font_);
    this->setCharacterSize(30);
    this->setString("String");
}

Brabbadon::SFML::Graphics::Text::Text(std::string string)
{
    font_.loadFromFile("Assets/fonts/arial.ttf");
    this->setFont(font_);
    this->setCharacterSize(30);
    this->setString(string);
}
Brabbadon::SFML::Graphics::Text::Text(std::string string, sf::Font &font)
{
    this->setFont(font);
    this->setCharacterSize(30);
    this->setString(string);
}
Brabbadon::SFML::Graphics::Text::Text(std::string string, sf::Font &font, int size)
{
    this->setFont(font);
    this->setCharacterSize(size);
    this->setString(string);
}
Brabbadon::SFML::Graphics::Text::Text(std::string string, sf::Font &font, int size, sf::Color color)
{
    this->setFont(font);
    this->setCharacterSize(size);
    this->setString(string);
    this->setFillColor(color);
}

void Brabbadon::SFML::Graphics::Text::setTextInt(int inputText)
{
    this->setString(std::to_string(inputText));
}

void Brabbadon::SFML::Graphics::Text::drawText(sf::RenderWindow &window)
{
    window.draw(*this);
}
