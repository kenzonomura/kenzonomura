#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include "interfaces.h"
#include <optional>
#include <string>
#include "entidades.h"
#include "autenticado.h"

class ServicosConta : public IGerenciamentoUsuario {
private:
    DatabaseManager dbManager;  // Declarando o campo dbManager
public:
    ServicosConta(const std::string& dbPath);
    void criarUsuario(const Conta& conta) override; // Correção aqui
    void editarUsuario(const std::string& email, const std::string& novoNome, const std::string& novaSenha) override;
    void excluirUsuario(const std::string& email) override;
    std::optional<Conta> visualizarUsuario(const std::string& email);
};

class ServicosQuadro : public IGerenciamentoQuadro{
public:
    
    ServicosQuadro(const std::string& dbPath);
    void criarQuadro(const std::string& emailConta, const Quadro& quadro);
    void editarQuadro(const std::string& emailUsuario, const std::string& codigo, const std::optional<std::string>& novoNome, const std::optional<std::string>& novaDescricao, const std::optional<int>& novoLimite);
    void excluirQuadro(const std::string& emailUsuario, const std::string& codigo);
    std::optional<Quadro> visualizarQuadro(const std::string& emailUsuario, const std::string& codigo);

private:
    DatabaseManager dbManager;
};

class ServicosCartao : public IGerenciamentoCartao {
private:
    DatabaseManager dbManager;

public:
    ServicosCartao(const std::string& dbPath);
    void criarCartao(const Cartao& cartao, const std::string& codigoQuadro, const std::string& emailUsuario) override;
    std::optional<Cartao> visualizarCartao(const std::string& codigoCartao, const std::string& emailUsuario) override;
    void moverCartao(const std::string& codigoCartao, const std::string& novaColuna, const std::string& emailUsuario) override;
    void excluirCartao(const std::string& codigoCartao, const std::string& emailUsuario) override;
};

#endif // CONTROLADORASSERVICO_H_INCLUDED
