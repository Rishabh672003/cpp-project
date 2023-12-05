#include <gtkmm/application.h>
#include <gtkmm/togglebutton.h>
#include <gtkmm/window.h>
#include <iostream>

class MainWindow : public Gtk::Window {
  public:
    MainWindow();

  private:
    Gtk::ToggleButton toggleButton;
    void onToggleClicked();
};

MainWindow::MainWindow() {
    set_title("Toggle Button Demo");
    set_default_size(200, 200);

    toggleButton.set_label("On/Off");
    toggleButton.signal_toggled().connect(
        sigc::mem_fun(*this, &MainWindow::onToggleClicked));

    add(toggleButton);
    show_all();
}

void MainWindow::onToggleClicked() {
    bool isToggled = toggleButton.get_active();

    if (isToggled) {
        std::cout << "Toggle button is on" << std::endl;
    } else {
        std::cout << "Toggle button is off" << std::endl;
    }
}

int main(int argc, char* argv[]) {
    Glib::RefPtr<Gtk::Application> app =
        Gtk::Application::create(argc, argv, "com.example.gtkmm");
    MainWindow window;
    return app->run(window);
}
