#include <gtest/gtest.h>
#include <string>

#include "../src/libro.h"
#include "../src/escritorLibros.h"

namespace {
    TEST(EscritorTest, Prueba_EscribirUnLibro) {
        
        Libro libroPrueba { 15, "Prueba", "12345" };

        EscritorLibros escritor {"prueba.dat"};
        escritor.AgregarLibro(libroPrueba)
        escritor.Cerrar();

        // Leer el libro de prueba
        LectorLibros lector {"prueba.dat"};
        libroLeido = lector.ObtenerLibro(0);
        lector.Cerrar()

        EXPECT_EQ(libroLeido.ID, libroPrueba.ID);
        EXPECT_EQ(libroLeido.Nombre, libroPrueba.Nombre);
        EXPECT_EQ(libroLeido.ISBN, libroPrueba.ISBN);
    }

    TEST(EscritorTest, Prueba_ExcepcionLecturaLibroNoExiste) {
        EXPECT_THROW({

            Libro libroPrueba { 15, "Prueba", "12345" };

            EscritorLibros escritor {"prueba.dat"};
            escritor.AgregarLibro(libroPrueba)
            escritor.Cerrar();

            // Leer el libro de prueba
            LectorLibros lector {"prueba.dat"};
            libroLeido = lector.ObtenerLibro(5);
            lector.Cerrar();

        }, ExcepcionLibroNoExiste);

    }

}