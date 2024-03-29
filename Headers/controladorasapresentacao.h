#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include "interfaces.h"
#include <iostream>
#include "controladoras.h"

class TelaInicial : public ITelaInicial {
public:
    TelaInicial();
    void exibir() override;
};

class TelaCadastro : public ITelaCadastro {
public:
    TelaCadastro();
    void exibir() override;
};

class TelaLogin : public ITelaLogin {
private:
    ControladorLogin controleLogin;

public:
    TelaLogin(const std::string& dbPath);
    void exibir() override;
};

class TelaGerenciamentoQuadros : public ITelaQuadros {
private:
    ControladorQuadros controladorQuadros;
    std::string emailUsuario;

public:
    TelaGerenciamentoQuadros(const std::string& dbPath, const std::string& emailUsuario);
    void exibir() override;
};

#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
