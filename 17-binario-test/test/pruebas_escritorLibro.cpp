#include <gtest/gtest.h>
#include <string>

#include "../src/libro.h"
#include "../src/escritorLibros.h"
#include "../src/lectorLibros.h"
#include "../src/excepciones/excepcionLibroNoExiste.h"

using namespace std;

namespace {
    TEST(EscritorTest, Prueba_EscribirUnLibro) {
        
        Libro libroPrueba { 15, "Prueba", "12345" };

        EscritorLibros escritor {"prueba.dat"};
        escritor.AgregarLibro(libroPrueba);
        escritor.Cerrar();

        // Leer el libro de prueba
        LectorLibros lector {"prueba.dat"};
        Libro libroLeido = lector.ObtenerLibro(0);
        lector.Cerrar();

        EXPECT_EQ(libroLeido.getID(), libroPrueba.getID());
        EXPECT_EQ(libroLeido.getNombre(), libroPrueba.getNombre());
        EXPECT_EQ(libroLeido.getISBN(), libroPrueba.getISBN());
    }

    TEST(EscritorTest, Prueba_GetLibro) {
        
        int idLibro {15};
        string nombreLibro {"Prueba"};
        string isbn {"12345"};

        Libro libroPrueba { idLibro, nombreLibro, isbn };

        EXPECT_EQ(libroPrueba.getID(), idLibro);
        EXPECT_EQ(libroPrueba.getNombre(), nombreLibro);
        EXPECT_EQ(libroPrueba.getISBN(), isbn);
        
    }

    TEST(EscritorTest, Prueba_ExcepcionLecturaLibroNoExiste) {

        Libro libroLeido {1, "prueba", "12345"};

        EXPECT_THROW({

            EscritorLibros escritor {"prueba.dat"};
            escritor.AgregarLibro(libroLeido);
            escritor.Cerrar();

            // Leer el libro de prueba
            LectorLibros lector {"prueba.dat"};
            libroLeido = lector.ObtenerLibro(5);
            lector.Cerrar();

        }, ExcepcionLibroNoExiste);

    }

}