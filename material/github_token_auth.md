# Como Fazer Push no GitHub com Token de Acesso Pessoal

## 1. Criar o Token
- Vá em **GitHub → Settings → Developer settings → Fine-grained tokens**
- Escolha o repositório desejado
- Dê permissão:
  - **Contents: Read and write**
- Copie o token (ele só aparece uma vez)

## 2. Configurar name e email

```bash
git config --global user.name "Seu Nome"
git config --global user.email "seuemail@exemplo.com"
```


## 3. Usar HTTPS no Repositório
Verifique e ajuste a URL remota:
```bash
git remote -v
git remote set-url origin https://github.com/USUARIO/REPOSITORIO.git
```

## 4. Fazer o Push
```bash
git add .
git commit -m "mensagem do commit"
git push origin main
```

O Git pedirá usuário e senha:
- **Usuário**: seu nome de usuário do GitHub
- **Senha**: cole o token criado