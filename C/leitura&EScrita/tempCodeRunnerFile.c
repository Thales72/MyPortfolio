printf("O candidato %s está apto ao serviço militar\n", pessoa[i].nome);
            aptos++;
        } else {
            printf("O candidato %s não está apto ao serviço militar\n", pessoa[i].nome);
            inaptos++;
        }
    }
    printf("\nAs pessoas aptas para o serviço militar obrigatório são %d, e as inaptas são %d", aptos, inaptos);
