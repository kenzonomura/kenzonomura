#ifndef AUTENTICADO_H
#define AUTENTICADO_H

#include <sqlite3.h>
#include <string>
#include <vector>
#include <map>
#include <optional>

class Autenticado {
public:
    Autenticado(const std::string& dbPath);
    ~Autenticado();

    bool abrirConexao();
    void criarTabelas();
    std::optional<std::vector<std::map<std::string, std::string>>> executarConsulta(const std::string& sql);
    void prepararConsulta(const std::string& sql);
    void vincularValor(int posicao, const std::string& valor);
    bool executarConsultaPreparada();

private:
    sqlite3* db;            // Conexão com o banco de dados
    sqlite3_stmt* stmt;     // Declaração para consulta preparada
    std::string dbPath;     // Caminho para o banco de dados
};

#endif // AUTENTICADO_H
