Info<< "Reading field phi\n" << endl;

/*
volScalarField T
(
    IOobject
    (
        "T",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);
*/

volScalarField phi
(
    IOobject
    (
        "phi",
        runTime.timeName(),
        mesh,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    mesh
);

Info<< "Reading transportProperties\n" << endl;

IOdictionary transportProperties
(
    IOobject
    (
        "transportProperties",
        runTime.constant(),
        mesh,
        IOobject::MUST_READ_IF_MODIFIED,
        IOobject::NO_WRITE
    )
);


/*
Info<< "Reading diffusivity DT\n" << endl;
dimensionedScalar DT
(
    transportProperties.lookup("DT")
);
*/

/*
dimensionedScalar c0 =
dimensionedScalar
(
    "c0",
    dimensionSet (0, 1, -1, 0, 0, 0,  0),
    1.0
);
*/
dimensionedScalar c0
(
    transportProperties.lookup("c0")
);

#include "createFvOptions.H"
