#include "Screen.h"

Screen* Screen::m_instance = nullptr;

sf::Vector2u Screen::GetScreenDims()
{
    return m_instance->m_window->getSize();
}

Screen* Screen::Get()
{
    if (m_instance != nullptr)
    {
        return m_instance;
    }
    else 
    {
        m_instance = new Screen;
    }

}

void Screen::init(sf::RenderWindow* window)
{
    m_window = window;
}
