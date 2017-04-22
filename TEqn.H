    // laminar scalar transport eqn

    fvScalarMatrix TEqn
    (
        fvm::div(phi, T)
        - fvm::laplacian(DT, T)
      ==
        fvOptions(T)
    );

    TEqn.relax();
    TEqn.solve();
    fvOptions.correct(T);
