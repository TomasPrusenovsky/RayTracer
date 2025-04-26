#include "Framer/Framer.h"
#include "imgui.h"
#include "glm/gtc/type_ptr.hpp"

int main() {

    fr::Window window(800, 800, "Framer-Project");

    glm::vec4 background{0.07f, 0.13f, 0.17f, 1.0f};
    while (window.IsRunning()) {
        window.BegimFrame(background.r, background.g, background.b, background.a);
        ImGui::Begin("Hello window");
        ImGui::Text("Background");
        ImGui::ColorEdit4("Color", glm::value_ptr(background));
        ImGui::End();


        window.EndFrame();
    }
}
