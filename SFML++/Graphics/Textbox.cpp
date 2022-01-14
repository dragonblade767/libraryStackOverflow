#include "Textbox.hpp"

Brabbadon::SFML::Graphics::Textbox::Textbox(bool password)
{
    font.loadFromFile("AtoZ_Regular.ttf");
    text.setFont(font);
    text.setCharacterSize(35);
    rectangle.setSize({315, 50});
    errorBox.setSize({325, 60});
    errorBox.setPosition(-5, -5);
    text.setPosition(5, 5);
    text.setFillColor(sf::Color::Black);
    if (password == true) cryptic = true;
}
Brabbadon::SFML::Graphics::Textbox::Textbox()
{
    font.loadFromFile("AtoZ_Regular.ttf");
    text.setFont(font);
    text.setCharacterSize(35);
    rectangle.setSize({315, 50});
    errorBox.setSize({325, 60});
    errorBox.setPosition(-5, -5);
    errorBox.setFillColor(sf::Color::Red);
    text.setPosition(5, 5);
    text.setFillColor(sf::Color::Black);
    cryptic = false;
}

void Brabbadon::SFML::Graphics::Textbox::setPosition(int x, int y)
{
    rectangle.setPosition(x, y);
    errorBox.setPosition(-5 + x, -5 + y);
    text.setPosition(5 + x, 5 + y);
}

void Brabbadon::SFML::Graphics::Textbox::draw(sf::RenderWindow &window)
{
    if (correct == false) window.draw(errorBox);
    window.draw(rectangle);
    window.draw(text);
}
std::string Brabbadon::SFML::Graphics::Textbox::stars(std::string password)
{
    std::string stars;
    for (int i = 0; i < static_cast<int>(password.length()); i++)
    {
        stars+="*";
    }
    return stars;
}
void Brabbadon::SFML::Graphics::Textbox::typing(char letter)
{
    if (textString.length() < 20 && active == true)
    {
        if (letter == 8 && textString.length() > 0)
        {
            textString = textString.substr(0, textString.length()-1);
            if (cryptic == true) text.setString(stars(textString));
            else text.setString(textString);
        }
        //31-64, 64-127
        if ((letter > 31 && letter < 64) || (letter > 64 && letter < 127))
        {
            textString+=letter;
            if (cryptic == true) text.setString(stars(textString));
            else text.setString(textString);
        }
    }
    else if (textString.length() > 0 && active == true && letter == 8)
    {
        textString = textString.substr(0, textString.length()-1);
        if (cryptic == true) text.setString(stars(textString));
        else text.setString(textString);
    }
}

bool Brabbadon::SFML::Graphics::Textbox::mouseHover(sf::RenderWindow &window)
{
    if (rectangle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
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
bool Brabbadon::SFML::Graphics::Textbox::mouseClick(sf::RenderWindow &window)
{
    if (mouseHover(window) == true && sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        active = true;
        return true;
    }
    else if (mouseHover(window) == false && sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        active = false;
        return false;
    }
    return false;
}
void Brabbadon::SFML::Graphics::Textbox::clear()
{
    textString = "";
    text.setString(textString);
}
