#include "Graphics.hpp"
sf::Font makeFont(std::string str)
{
    sf::Font Font;
    Font.loadFromFile(str);
    return Font;
}
sf::Font Brabbadon::SFML::Graphics::Fonts::Arial = makeFont("Assets/Fonts/arial.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::AtoZ = makeFont("Assets/Fonts/arial.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Optificio = makeFont("Assets/Fonts/Opificio_regular.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Algerian = makeFont("Assets/Fonts/ALGER.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Bauhas = makeFont("Assets/Fonts/BAUHS93.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::BerlinSans = makeFont("Assets/Fonts/BERNHC.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::BookmanOld = makeFont("Assets/Fonts/BOOKOS.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Calibri = makeFont("Assets/Fonts/calibri.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Calisto = makeFont("Assets/Fonts/CALIST.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Curlz = makeFont("Assets/Fonts/CURLZ___.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Hatten = makeFont("Assets/Fonts/HATTEN.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Imprint = makeFont("Assets/Fonts/IMPRISHA.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Jokerman = makeFont("Assets/Fonts/JOKERMAN.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::OldEnglish = makeFont("Assets/Fonts/OLDENGL.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::BradleyHound = makeFont("Assets/Fonts/BRADHITC.ttf");
sf::Font Brabbadon::SFML::Graphics::Fonts::Broadway = makeFont("Assets/Fonts/BROADW.ttf");
